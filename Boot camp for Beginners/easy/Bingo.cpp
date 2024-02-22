#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
  vector<vector<int>> A(3, vector<int>(3));
  vector<vector<int>> A_(3, vector<int>(3, 0));
  int                 n;
  for (int i = 0; i < 3; i++) {
    cin >> A[i][0] >> A[i][1] >> A[i][2];
  }
  cin >> n;
  int d;
  for (int i = 0; i < n; i++) {
    cin >> d;
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        if (A[j][k] == d) {
          A_[j][k] = 1;
        }
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    if (A_[i][0] == 1 && A_[i][1] == 1 && A_[i][2] == 1) {
      cout << "Yes";
      exit(0);
    }
  }
  for (int i = 0; i < 3; i++) {
    if (A_[0][i] == 1 && A_[1][i] == 1 && A_[2][i] == 1) {
      cout << "Yes";
      exit(0);
    }
  }
  if (A_[0][0] == 1 && A_[1][1] == 1 && A_[2][2] == 1) {
    cout << "Yes";
    exit(0);
  }
  if (A_[0][2] == 1 && A_[1][1] == 1 && A_[2][0] == 1) {
    cout << "Yes";
    exit(0);
  }
  cout << "No";
}