#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
// Tのi-1文字目までは地続きで移動できる初期位置でTのi文字目も地続きで行けるかを判定する関数
// i文字目まで実行した時点で地続きで移動できる地点なら1、
//そうでなければ0の値を各要素にもつ地図と同じサイズの配列を返す
vector<vector<int>> search(char c, vector<vector<int>> &v, vector<string> M)
{
  int                 h = v.size();
  int                 w = v.at(0).size();
  vector<vector<int>> r(h, vector<int>(w, 0));

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (v[i][j] == 1) {
        if (c == 'L') {
          if (M[i][j - 1] == '#') {
            r[i][j - 1] = 1;
          }
        } else if (c == 'R') {
          if (M[i][j + 1] == '#') {
            r[i][j + 1] = 1;
          }
        } else if (c == 'U') {
          if (M[i - 1][j] == '#') {
            r[i - 1][j] = 1;
          }
        } else if (c == 'D') {
          if (M[i + 1][j] == '#') {
            r[i + 1][j] = 1;
          }
        }
      }
    }
  }
  return r;
}

int main()
{
  int h, w, n;
  int sum = 0;
  cin >> h >> w >> n;
  string T;
  for (int i = 0; i < n; i++) {
    char c;
    cin >> c;
    T.push_back(c);
  }
  vector<string>      M(h);
  vector<vector<int>> data(h, vector<int>(w, 1));
  for (int i = 0; i < h; i++) {
    string s;
    cin >> s;
    M[i] = s;
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (M[i][j] == '#') {
        data[i][j] = 0;
      }
    }
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      cout << data[i][j];
    }
    cout << endl;
  }
  cout << endl;
  for (int i = 0; i < n; i++) {
    data = search(T[i], data, M);
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        cout << data[i][j];
      }
      cout << endl;
    }
    cout << endl;
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      sum += data[i][j];
    }
  }
  cout << sum << endl;
}