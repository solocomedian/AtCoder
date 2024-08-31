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
  int w, b;
  int count_w, count_b;
  cin >> w >> b;
  string s = "wbwbwwbwbwbw";
  string S = "";
  for (int i = 0; i < 30; i++) {
    S = S + s;
  }
  int l = S.size();
  for (int i = 0; i < l; i++) {
    count_w = 0;
    count_b = 0;
    for (int j = i; j < l; j++) {
      if (S[j] == 'w') {
        count_w++;
      } else {
        count_b++;
      }
      if (count_w == w && count_b == b) {
        cout << "Yes" << endl;
        exit(0);
      }
    }
    if (i == l - 1) {
      cout << "No" << endl;
      break;
    }
  }
}