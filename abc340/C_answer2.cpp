#include <iostream>
#include <map>
using namespace std;
// 関数f(N)の漸化式を再起関数でひたすら解けば答えは出るが、Nが大きい場合はTLE
// メモ化再起を利用することで高速化
// Nをキー、f(N)の返り値を値とした辞書を作って同じf(N)が出てきた場合に計算の手間を省く
// 計算量がO(N)からO(logN)まで削減できる
map<long long, long long> m;  // mapはC++の辞書型
long long                 f(long long N)
{
  if (N == 1)
    return 0;
  if (m.count(N))  // vector.count(N)は指定したNをキーとして持つ要素の個数を返す
    return m[N];  // C++のif文は0が偽、それ以外が真の判定となり、ifとmap::count()でキーの検索が出来る
  return m[N] = f(N / 2) + f((N + 1) / 2) + N;
}
int main()
{
  long long N;
  cin >> N;
  cout << f(N) << endl;
}
