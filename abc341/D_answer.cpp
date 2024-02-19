#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <vector>
using namespace std;

// 公式の解答
// ある正の整数XのNとMのうちちょうど一方のみで割り切れる数はL=LCM(N.M)として
// [X/N]+[X/M]-2[X/L]個である
// このとき問題の解がX以下であることと、[X/N]+[X/M]-2[X/L]>=Kは同値
// 問題設定より解は少なくとも0から2*10^18の間に存在
// よってXについて下限を0、上限を2*10^18として二分探索を行うことで解を求められる
// 二分探索とはある条件についてYes/Noの２択から選択する動作を条件を変更しながら繰り返すことで
// 解を求める方法のことである

int main()
{
  long long n, m, x, k;
  cin >> n >> m >> k;
  x = lcm(n, m);
  long long l = 0;
  long long r = 2e+18;  // eを用いることで10のn乗を表せる
  long long mid, y;
  while (r - l >= 2) {
    mid = (l + r) / 2;
    y = (mid / n) + (mid / m) - 2 * (mid / x);
    if (y < k)
      l = mid;
    else
      r = mid;
  }
  cout << r << endl;
}