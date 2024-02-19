#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <vector>
using namespace std;
// 自分で解いた際の解法
// 最小公倍数LCMを用いてNまたはMのうちちょうど一方のみで割り切れる数setをもとめる
// LCM周期でset個ちょうど一方で割り切れる数が存在する
// Kをsetで割った商と余りをあとは考えればよい
int main()
{
  long long n, m, k;
  cin >> n >> m >> k;
  long long LCM = lcm(n, m);
  long long set = LCM / n + LCM / m - 2;
  k -= 1;  // 後述の余りをカウントするときの初期値の分だけKから1引く
  long long r = k % set;
  long long total = (k / set) * LCM;
  long long count = 0;
  long long n0 = n;
  long long m0 = m;
  // 余りの分をカウントする
  // このときn0とm0の大小比較でカウントしていくと１つずつ数えるより早い
  while (count < r) {
    if (n0 < m0) {
      n0 += n;
    } else {
      m0 += m;
    }
    count++;
  }
  total += min(n0, m0);
  cout << total << endl;
}
