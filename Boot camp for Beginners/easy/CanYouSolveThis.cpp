#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
  int n, m, c;
  int correct = 0;
  cin >> n >> m >> c;
  vector<int>         B(m);
  vector<vector<int>> A(n, vector<int>(m));

  for (int i = 0; i < m; i++) {
    cin >> B[i];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> A[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = 0; j < m; j++) {
      sum += A[i][j] * B[j];
    }
    sum += c;
    if (sum > 0) {
      correct += 1;
    }
  }
  cout << correct << endl;
}