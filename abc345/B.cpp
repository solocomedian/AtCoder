#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

int main()
{
  long long x;
  cin >> x;
  long long x_d = x / 10;
  long long x_r = x % 10;
  if (x > 0) {  // x_dはダメ(-9から-1の場合にx_d=0&X_r!=0となり、出力が1になってしまう)
    if (x_r != 0) {
      cout << x_d + 1 << endl;
    } else {
      cout << x_d << endl;
    }
  } else {
    cout << x_d << endl;
  }
}