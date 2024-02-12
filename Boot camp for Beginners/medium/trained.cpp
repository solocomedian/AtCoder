#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
// find(vector.begin(), vedtor.end(), value)メソッドで3つ目に指定した要素の最初のインデックスを探せる
//　存在しない場合は2つ目のイテレータを返す
int main()
{
  int         n;
  int         now   = 1;
  int         count = 0;
  vector<int> list;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  while (true) {
    list.push_back(now);
    now = a[now];
    count += 1;
    if (now == 2) {
      cout << count << endl;
      break;
    }
    if (find(list.begin(), list.end(), now) != list.end()) {
      cout << -1 << endl;
      break;
    }
  }
}