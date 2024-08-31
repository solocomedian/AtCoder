#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

// 公式解説を参考に動的計画法を使って解いた
int dp[105][105];
int main()
{
  for (int i = 0; i < 105; i++) {
    for (int j = 0; j < 105; j++) {
      dp[i][j] = 1e9;
    }
  }
  dp[0][0] = 0;
  string s, t;
  cin >> t;
  int len = t.size();  // 与えられた文字列の長さ
  int a, n;
  cin >> n;                      // 袋の数
  for (int i = 0; i < n; i++) {  // n個目の袋の処理
    cin >> a;                    // 袋に入っている文字列の数a
    for (int j = 0; j < 105; j++) {
      dp[i + 1][j] = dp[i][j];
    }
    for (int j = 0; j < a; j++) {

      cin >> s;
      int len_s = s.size();                     // 文字列の長さ
      for (int k = 0; k <= len - len_s; k++) {  // kが直前の処理まで一致した文字列の長さ
        if (t.substr(k, len_s) == s) {
          dp[i + 1][k + len_s] = min(dp[i + 1][k + len_s], dp[i][k] + 1);
        }
      }
    }
  }
  // 結果の出力
  if (dp[n][len] > 5e8) {
    cout << -1 << endl;
  } else {
    cout << dp[n][len] << endl;
  }
}