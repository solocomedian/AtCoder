#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

int main()
{
  int n, t;
  cin >> n >> t;
  vector<vector<int>> predict(t, vector<int>(2));
  vector<int>         a(n, 0);
  for (int i = 0; i < t; i++) {
    cin >> predict[i][0] >> predict[i][1];
  }
  for (int i = 0; i < t; i++) {
    a[predict[i][0] - 1] += predict[i][1];
    unordered_set<int> s(a.begin(), a.end());
    cout << s.size() << endl;
  }
}