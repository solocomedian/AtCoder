#include <algorithm>
#include <chrono>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <vector>
using namespace std;
// 公式の解答
// 自力で解いた解答と違い、文字変換前にすべてのアルファベットに対する変換のためのハッシュテーブルを作っている
// ハッシュテーブルを一度のクエリ参照で作るので計算量が自力で解いた場合よりも少ない
int main()
{
  auto     start = std::chrono::high_resolution_clock::now();
  unsigned N;
  cin >> N;
  string S;
  cin >> S;
  unsigned Q;
  cin >> Q;
  // 変換前と変換後の文字列を作る
  string from, to;
  // すべての英小文字が含まれる文字列で初期化
  from = to =
      "abcdefghijklmnopqrstuvwxyz"s;  //C++14以降では、文字列リテラルの後にsを付けると、そのリテラルはstd::string型として扱われます。
      //通常、ダブルクォーテーションで囲まれた文字列リテラルはconst char*型として扱われますが、sを付けることでstd::string型として扱うことができます。
  for (unsigned i = 0; i < Q; ++i) {
    char c, d;
    cin >> c >> d;
    for (auto &&m : to)
      if (m == c)  // c があったら
        m = d;     // d に変換
  }
  for (const auto c : S)
    for (unsigned i = 0; i < 26; ++i)
      if (c == from[i])  // 変換前の文字から
        cout << to[i];   // 変換後の文字を求める
  cout << endl;

  auto                          end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> diff = end - start;
  std::cout << "Time to run the code: " << diff.count() << " s\n";
  return 0;
}