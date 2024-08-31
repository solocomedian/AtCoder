#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long L, R;
  cin >> L >> R;
  vector<pair<long long, long long>> ans;
  while (L < R) {
    long long x = L;
    for (int i = 0; i < 60; ++i) {
      if ((x >> i & 1) && (x + (1LL << i) <= R)) {
        ans.push_back({L, L = x + (1LL << i)});
        break;
      }
    }
  }
  cout << ans.size() << endl;
  for (auto p : ans) {
    cout << p.first << " " << p.second << endl;
  }
  return 0;
}