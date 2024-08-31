#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <string>
#include <vector>
using namespace std;
// ある文字列について各アルファベットの出現回数を数える
// その後、各アルファベットの出現回数を使って計算する
// 例えばaを別のアルファベットに変える操作によりは、aの出現回数 * (文字列の長さ - aの出現回数)種類の文字列が出来る
// これを全てのアルファベットについて行い、重複を考慮してその後に2で割る(例：aをbに変えるとbをaに変えるという操作が重複して数えられるため)
// また、どれか1種類でも同じアルファベットが2回以上出現している場合は、入力された文字列も可能なため、その場合は答えに1を足す
int main()
{
  string s;
  cin >> s;
  vector<char>    alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                              'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  long long       ans = 0;
  long long       tyouhuku = 0;
  map<char, long> Alphabet = {
      {'a', 0},
      {'b', 0},
      {'c', 0},
      {'d', 0},
      {'e', 0},
      {'f', 0},
      {'g', 0},
      {'h', 0},
      {'i', 0},
      {'j', 0},
      {'k', 0},
      {'l', 0},
      {'m', 0},
      {'n', 0},
      {'o', 0},
      {'p', 0},
      {'q', 0},
      {'r', 0},
      {'s', 0},
      {'t', 0},
      {'u', 0},
      {'v', 0},
      {'w', 0},
      {'x', 0},
      {'y', 0},
      {'z', 0}
  };
  long long len = s.size();
  for (long long i = 0; i < len; i++) {
    Alphabet[s[i]]++;
  }
  for (auto v : alphabet) {
    if (Alphabet[v] != 0) {
      ans += (len - Alphabet[v]) * Alphabet[v];
    }
    if (Alphabet[v] > 1) {
      tyouhuku = 1;
    }
  }
  cout << ans / 2 + tyouhuku << endl;
}