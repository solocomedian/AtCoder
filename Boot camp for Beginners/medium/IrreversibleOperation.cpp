#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

// バブルソートを実装すればいいと思ったが、計算量が最大でO(N^2)でTLEとなり断念
// int main()
// {
//   string S;
//   int    count = 0;
//   cin >> S;
//   for (int i = 0; i < S.size() - 1; i++) {
//     for (int j = S.size() - 1; j > i; j--) {
//       if (S[j - 1] == 'B' && S[j] == 'W') {
//         S[j - 1] = 'W';
//         S[j] = 'B';
//         count += 1;
//       }
//     }
//   }
//   cout << count << endl;
// }

//公式解説のやり方
//裏返す操作はBとWの位置を入れ替える動作と一緒
//最終的に全てのWの前にBが表れなくなるまで操作が続く
//初期配置で各Wの左側にどれだけBがあるかの総和が答えとなるはず
#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
  string    S;
  long long count = 0;
  // countがint型だと上手くいかないことに注意(一部WAになる)
  // 最初Bが10^5個、そのあとWが10^5個並んでいるとすると10^5 * 10^5で10^10操作が行われる
  // 10^10 > 2^31なのでオーバーフローとなるので64bitのlong long型を使うのが安全
  long long left_b = 0;
  cin >> S;
  long long n = S.size();
  for (int i = 0; i < n; i++) {
    if (S[i] == 'W') {
      count += left_b;
    } else {
      left_b += 1;
    }
  }
  cout << count << endl;
}