#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
// 2乗根を用いた解法、平方数なら2乗根を四捨五入して2乗しても元の値と同じになるはず
int main()
{
  string a;
  string b;
  cin >> a >> b;
  string ab = a + b;
  int    c = atoi(ab.c_str());
  if (pow(round(sqrt(long(c))), 2) == long(c)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}