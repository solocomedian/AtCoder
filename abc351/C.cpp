#include <algorithm>
#include <cmath>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

int main()
{
  list<long long> ls;
  long long       n;
  cin >> n;
  long long a[n];
  for (long long i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (long long i = 0; i < n; i++) {
    ls.push_back(a[i]);
    while (true) {
      if (ls.size() == 1) {
        break;
      } else if (*(ls.rbegin()) != *(next(ls.rbegin()))) {
        break;
      } else {
        int num = *(ls.rbegin()) + 1;
        ls.pop_back();
        ls.pop_back();
        ls.push_back(num);
      }
    }
  }
  cout << ls.size() << endl;
}