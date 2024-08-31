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
  unsigned long         d;
  vector<unsigned long> v;
  while (1) {
    cin >> d;
    v.push_back(d);
    if (d == 0) {
      break;
    }
  }
  reverse(v.begin(), v.end());
  for (auto i : v) {
    cout << i << endl;
  }
}