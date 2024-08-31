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
  map<char, int> alphabet = {};
  string         s;
  cin >> s;
  for (int i = 0; i < int(s.size()); i++) {
    alphabet[s[i]]++;
  }
  for (int i = 1; i < 101; i++) {
    int count = 0;
    for (auto x : alphabet) {
      if (x.second == i) {
        count++;
      }
    }
    if (count != 0 && count != 2) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}