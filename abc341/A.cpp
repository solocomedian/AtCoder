#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
  int    n;
  string S = "";
  cin >> n;
  for (int i = 0; i < n; i++) {
    S.push_back('1');
    S.push_back('0');
  }
  S.push_back('1');
  cout << S << endl;
}