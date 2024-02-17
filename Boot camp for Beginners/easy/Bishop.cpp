#include <cmath>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
  long long h, w;  // int型だと最大値を考えた際にオーバーフローしてしまう
  cin >> h >> w;
  if (h == 1 || w == 1) {  // 縦横どちらか１マスだけだと斜め移動できない
    cout << 1 << endl;
  } else {
    if ((h * w) % 2 == 1) {
      cout << h * w / 2 + 1 << endl;
    } else {
      cout << h * w / 2 << endl;
    }
  }
}