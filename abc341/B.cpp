#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
  int               n;
  vector<long long> A;
  long long         sum = 0;
  cin >> n;
  vector<vector<int>> table(n, vector<int>(2));
  for (int i = 0; i < n; i++) {
    int d;
    cin >> d;
    A.push_back(d);
  }
  for (int i = 0; i < n - 1; i++) {
    cin >> table[i][0] >> table[i][1];
  }
  for (int i = 0; i < n - 1; i++) {
    A[i] = A[i] + sum;
    sum = (A[i] / table[i][0]) * table[i][1];
  }
  cout << A[n - 1] + sum << endl;
}