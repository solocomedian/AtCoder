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
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    if ((i + 1) % 3 != 0) {
      cout << "o";
    } else {
      cout << "x";
    }
  }
  cout << endl;
}