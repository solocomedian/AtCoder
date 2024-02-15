#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
  int N;
  int X;
  cin >> N;
  X = round(double(N) / 1.08);         // roundで四捨五入
  if (floor(double(X) * 1.08) == N) {  // floor()で小数点以下切り捨て
    cout << X << endl;
  } else {
    X += 1;  // Nが切り捨てられた後の値であることを考慮してXを1増やしてもう一度
    if (floor(double(X) * 1.08) == N) {
      cout << X << endl;
    } else {
      cout << ":(" << endl;
    }
  }
}