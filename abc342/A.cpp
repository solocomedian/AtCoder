#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// 文字列中のある文字の個数を調べるにはcountが使える
int main()
{
  string s;
  cin >> s;
  long l = s.size();
  for (long i = 0; i < l; i++) {
    char ch = s[i];
    int  num = count(s.begin(), s.end(), ch);
    if (num == 1) {
      cout << i + 1 << endl;
      break;
    }
  }
}