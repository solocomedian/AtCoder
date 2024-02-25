#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <vector>
using namespace std;
// 自力で解いた際のコード
int main()
{
  string s;
  long   count;
  cin >> s;
  long l = s.size();
  for (long i = 0; i < l; i++) {
    count = 0;
    for (long j = 0; j < l; j++) {
      if (s[j] != s[i]) {
        count += 1;
      }
      if (count == l - 1) {  // breakがない条件だと末尾が異なる文字の場合二回出力されてしまう
        cout << i + 1 << endl;
        break;  // breakを入れることで二回出力を避ける
      }
    }
  }
}