#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main()
{
  unsigned long         n, m, l, q;
  unsigned long         d;
  set<unsigned long>    a, b, c;
  set<unsigned long>    sums;
  vector<unsigned long> x;
  cin >> n;
  for (unsigned long i = 0; i < n; i++) {
    cin >> d;
    a.insert(d);
  }
  cin >> m;
  for (unsigned long i = 0; i < m; i++) {
    cin >> d;
    b.insert(d);
  }
  cin >> l;
  for (unsigned long i = 0; i < l; i++) {
    cin >> d;
    c.insert(d);
  }
  cin >> q;
  for (unsigned long i = 0; i < q; i++) {
    cin >> d;
    x.push_back(d);
  }
  for (auto i : a) {
    for (auto j : b) {
      for (auto k : c) {
        sums.insert(i + j + k);
      }
    }
  }
  for (auto i : x) {
    if (sums.find(i) != sums.end()) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}