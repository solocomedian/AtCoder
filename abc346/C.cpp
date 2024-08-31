#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <vector>
using namespace std;
#include <set>

int main()
{
  long long n, k;
  cin >> n >> k;
  vector<long long> a(n);
  for (long long i = 0; i < n; i++)
    cin >> a[i];
  sort(a.begin(), a.end());
  vector<long long> b(n);
  for (long long i = 0; i < n; i++)
    b[i] = a[i];
  auto           upper = upper_bound(b.begin(), b.end(), k);
  set<long long> s(b.begin(), upper);
  long long      sum = (k + 1) * k / 2;
  for (auto i : s)
    sum -= i;
  cout << sum << endl;
}