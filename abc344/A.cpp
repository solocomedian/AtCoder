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
  string s;
  cin >> s;
  int         start, end;
  int         n = s.size();
  vector<int> v;
  for (int i = 0; i < n; i++) {
    if (s[i] == '|') {
      v.push_back(i);
    }
  }
  s.erase(s.begin() + v[0], s.begin() + v[1] + 1);
  cout << s << endl;
}