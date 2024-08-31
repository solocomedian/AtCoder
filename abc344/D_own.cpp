#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

// 公式解説を参考に動的計画法を使って解いた
int dp[200][200];
int main()
{
  fill(dp[0], dp[0] + 200 * 200, 0);
  dp[0][0] = 0;
  string s, t;
  cin >> t;
  int len = t.size();  // 与えられた文字列の長さ
  int a, n;
  cin >> n;                       // 袋の数
  for (int i = 1; i <= n; i++) {  // n個目の袋の処理
    cin >> a;                     // 袋に入っている文字列の数
    // n個目の袋でなにもしなかった場合の処理
    for (int j = 0; j < 200; j++) {
      if (dp[i - 1][j] != 0) {
        if (dp[i][j] != 0) {
          dp[i][j] = min(dp[i][j], dp[i - 1][j]);
        } else {
          dp[i][j] = dp[i - 1][j];
        }
      }
    }
    for (int j = 0; j < a; j++) {
      cin >> s;
      int len_s = s.size();            // 文字列の長さ
      for (int k = 0; k < len; k++) {  // kが直前の処理まで一致した文字列の長さ
        if ((t.substr(k, len_s) == s && dp[i][k] > 0) || (k == 0 && s == t.substr(k, len_s))) {  // 文字列が一致した場合
          // k+len_s文字目までに必要な最小金額を挿入
          if (dp[i][k + len_s] == 0) {
            dp[i][k + len_s] = dp[i][k] + 1;
          } else {
            dp[i][k + len_s] = min(dp[i][k + len_s], dp[i][k] + 1);
          }
        }
      }
    }
  }
  // 結果の出力
  if (dp[n][len] == 0) {
    cout << -1 << endl;
  } else {
    cout << dp[n][len] << endl;
  }
}