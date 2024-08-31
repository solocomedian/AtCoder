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
  int len = s.size();
  if (s[0] != '<') {
    cout << "No" << endl;
    return 0;
  } else {
    for (int i = 0; i < len - 2; i++) {
      if (s[i + 1] != '=') {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  if (s[len - 1] != '>') {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
}