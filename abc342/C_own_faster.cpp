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
// unordered_mapを使った方法
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

  unordered_map<char, char> m;
  for (char c = 'a'; c <= 'z'; c++) {
    m[c] = c;
  }

  for (int i = q - 1; i >= 0; i--) {
    m[v[i][0]] = m[v[i][1]];
  }

  for (int i = 0; i < n; i++) {
    ans[i] = m[s[i]];
  }

  for (auto ch : ans) {
    cout << ch;
  }
  cout << endl;

  auto                          end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> diff = end - start;
  std::cout << "Time to run the code: " << diff.count() << " s\n";
}