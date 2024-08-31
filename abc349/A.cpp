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
  int n;
  cin >> n;
  vector<int> a(n - 1);
  for (int i = 0; i < n - 1; i++) {
    cin >> a[i];
  }
  int sum = accumulate(a.begin(), a.end(), 0);
  cout << -sum << endl;
}