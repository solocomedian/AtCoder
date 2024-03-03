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
  unsigned long long n;
  cin >> n;
  unsigned long long k = 0;
  unsigned long long ans = 0;
  while (pow(k, 3) <= n) {
    string s = to_string(k * k * k);
    if (s == string(s.rbegin(), s.rend())) {
      ans = pow(k, 3);
    }
    k++;
  }
  cout << ans << endl;
}