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
  int p, total;
  total = 0;
  for (int i = 0; i < 9; i++) {
    cin >> p;
    total += p;
  }
  for (int i = 0; i < 8; i++) {
    cin >> p;
    total -= p;
  }
  cout << total+1 << endl;
}