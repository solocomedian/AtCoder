#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

int distance(int x1, int y1, int x2, int y2)
{
  return pow(x1 - x2, 2) + pow(y1 - y2, 2);
}

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> p(n, vector<int>(2));
  for (int i = 0; i < n; i++) {
    cin >> p[i][0] >> p[i][1];
  }
  for (int i = 0; i < n; i++) {
    int max = 0;
    int p_num = 0;
    for (int j = 0; j < n; j++) {
      int x1 = p[i][0];
      int y1 = p[i][1];
      int x2 = p[j][0];
      int y2 = p[j][1];
      if (distance(x1, y1, x2, y2) > max) {
        max = distance(x1, y1, x2, y2);
        p_num = j + 1;
      }
    }
    cout << p_num << endl;
  }
}