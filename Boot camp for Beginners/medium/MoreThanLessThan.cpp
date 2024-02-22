// #include <algorithm>
// #include <cmath>
// #include <iostream>
// #include <map>
// #include <numeric>
// #include <vector>
// using namespace std;
// 自力でやった解法
// a_iの連続した左にある<の個数と右にある>の個数の大きいほうがa_iの値となる
// TLEとなり断念
// long lessthan(string s, long k)
// {
//   long count = 0;
//   for (long i = k; i < s.length(); ++i) {
//     if (s[i] == '>') {
//       count += 1;
//     } else {
//       break;
//     }
//   }
//   return count;
// }

// long morethan(string s, long k)
// {
//   long count = 0;
//   for (long i = k - 1; 0 < i; --i) {
//     if (s[i] == '<') {
//       count += 1;
//     } else {
//       break;
//     }
//   }
//   return count;
// }

// vector<long> search(string s)
// {
//   long         n = s.length();
//   vector<long> A(n + 1);
//   for (long i = 0; i < n + 1; ++i) {
//     A[i] = max(morethan(s, i), lessthan(s, i));
//     // cout << A[i] << endl;
//   }
//   return A;
// }

// long main()
// {
//   string s;
//   cin >> s;
//   vector<long> A = search(s);
//   long         min = accumulate(A.begin(), A.end(), 0);
//   cout << min << endl;
// }
// 公式放送をもとにした解法
// まずa_1からa_Nについて左から<についてのみ走査
// 次にa_Nからa_1について右から>についてのみ走査
#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <vector>
using namespace std;
// long型でないと型落ちする
vector<long> search(string s)
{
  long         n = s.length() + 1;
  vector<long> A(n, 0);
  for (long i = 0; i < n - 1; i++) {
    if (s[i] == '<') {
      A[i + 1] = max(A[i + 1], A[i] + 1);
    }
  }
  for (long i = n - 2; i >= 0; i--) {
    if (s[i] == '>') {
      A[i] = max(A[i], A[i + 1] + 1);
    }
  }
  return A;
}

int main()
{
  string s;
  cin >> s;
  vector<long> A = search(s);
  long         min = reduce(A.begin(), A.end());
  cout << min << endl;
}