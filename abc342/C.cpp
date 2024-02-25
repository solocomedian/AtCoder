#include <algorithm>
#include <chrono>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
// 自力でメモ化再起でやろうしたらTLEになり上手くいかなかった
// 各アルファベットが最初メモ化するときに変換の条件v(Q行)を全て参照しなければならず、Qが大きいほど時間が掛かってしまう
unordered_map<char, char> m;  // mapはC++の辞書型
char                      f(char c, vector<vector<char>> v)
{
  char c0 = c;
  if (m.count(c)) {
    return m[c];
  } else {
    int n = v.size();
    for (int i = 0; i < n; i++) {
      if (c0 == v[i][0]) {
        c0 = v[i][1];
      }
    }
    m[c] = c0;
    return c0;
  }
}

int main()
{
  auto      start = std::chrono::high_resolution_clock::now();
  long long n;
  cin >> n;
  string s;
  cin >> s;
  long long q;
  cin >> q;
  long long            num = s.size();
  vector<char>         ans(num);
  vector<vector<char>> v(q, vector<char>(2));
  for (int i = 0; i < q; i++) {
    cin >> v[i][0] >> v[i][1];
  }
  for (int i = 0; i < n; i++) {
    ans[i] = f(s[i], v);
  }
  for (auto ch : ans) {
    cout << ch;
  }
  cout << endl;
  auto                          end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> diff = end - start;
  std::cout << "Time to run the code: " << diff.count() << " s\n";
}