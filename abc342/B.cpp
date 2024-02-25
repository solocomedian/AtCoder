#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int a, b;
    int pa, pb;
    cin >> a >> b;
    for (int j = 0; j < n; j++) {
      if (p[j] == a) {
        pa = j;
      }
      if (p[j] == b) {
        pb = j;
      }
    }
    if (pa < pb) {
      cout << a << endl;
    } else {
      cout << b << endl;
    }
  }
}