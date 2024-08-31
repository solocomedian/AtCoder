#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

map<long long, long long> mp;

int main()
#include <algorithm>

{
  long long n;
  cin >> n;
  for (long long i = 0; i < n; i++) {
    long long a, c;
    cin >> a >> c;
    if (auto iter = mp.find(c); iter != mp.end()) {
      mp[iter->first] = min(mp[iter->first], a);
    } else {
      mp[c] = a;
    }
  }
  long long max = max_element(mp.begin(), mp.end(), [](auto a, auto b) { return a.second < b.second; })->second;
  cout << max << endl;
}