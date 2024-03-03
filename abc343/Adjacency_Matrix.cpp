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
  vector<vector<int>> v(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> v[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (v[i][j] == 1) {
        cout << j + 1 << " ";
      }
    }
    cout << endl;
  }
}