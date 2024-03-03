#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

// 公式の解説に沿った解答
// 連想配列を使って、各要素の出現回数を数える
long diversity_of_scores(unordered_map<long, long> &points, vector<long> &c, long a, long b)
{
  points[c[a]] -= 1;
  if (points[c[a]] == 0) {
    points.erase(c[a]);  //　mapやvectorの要素はeraseで削除できる
  }
  c[a] += b;
  if (points.find(c[a]) == points.end()) {  // findで要素があるかどうかを調べる(findは要素がなければendを返す)
    points[c[a]] = 1;
  } else {
    points[c[a]] += 1;
  }
  return points.size();
}
int main()
{
  long n, t;
  cin >> n >> t;
  vector<long>              c(n, 0);
  unordered_map<long, long> points = {
      {0, n}
  };
  for (long i = 0; i < t; i++) {
    long a, b;
    cin >> a >> b;
    cout << diversity_of_scores(points, c, a - 1, b) << endl;  // indexに対応付けるためにa-1する
  }
}