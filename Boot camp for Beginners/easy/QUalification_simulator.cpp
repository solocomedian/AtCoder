#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int    n, a, b;
  string s;
  int    count = 0;
  int    rank  = 1;
  cin >> n >> a >> b;
  cin >> s;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'a') {
      if (count < a + b) {
        cout << "Yes" << endl;
        count++;
      } else {
        cout << "No" << endl;
      }
    } else if (s[i] == 'b') {
      if (count < a + b && rank <= b) {
        cout << "Yes" << endl;
        count++;
        rank++;
      } else {
        cout << "No" << endl;
      }

    } else {
      cout << "No" << endl;
    }
  }
}