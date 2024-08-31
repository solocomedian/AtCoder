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
  char a[n][n];
  char b[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      cin >> a[i][j];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      cin >> b[i][j];
  }
  int col, row;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j] != b[i][j]) {
        col = i + 1;
        row = j + 1;
      }
    }
  }
  cout << col << " " << row << endl;
}