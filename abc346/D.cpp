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
  long n;
  cin >> n;
  string s;
  cin >> s;
  vector<pair<int, int>> c;  // Change the type of the first element in the pair to int
  for (long i = 0; i < n; i++) {
    int cost;
    cin >> cost;
    c.push_back(make_pair(cost, i));
  }
  sort(c.begin(), c.end());
  long long l = s.size();
  int       flg = 0;
  for (long i = 0; i < l; i++) {
    if (s[i] == '1') {
    }
  }
}