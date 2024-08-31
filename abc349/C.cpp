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
  string s, t;
  cin >> s >> t;
  if (t[t.size() - 1] == 'X') {
    int start = 0;
    for (int i = 0; i < t.size() - 1; i++) {
      int flag = 0;
      for (int j = start; j < s.size(); j++) {
        if (t[i] + 32 == s[j]) {
          start = j + 1;
          flag = 1;
          break;
        }
      }
      if (flag == 0) {
        cout << "No" << endl;
        return 0;
      }
    }
  } else {
    int start = 0;
    for (int i = 0; i < t.size(); i++) {
      int flag = 0;
      for (int j = start; j < s.size(); j++) {
        if (t[i] + 32 == s[j]) {
          start = j + 1;
          flag = 1;
          break;
        }
      }
      if (flag == 0) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
}