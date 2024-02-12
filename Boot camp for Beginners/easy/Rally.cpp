#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
// 自分の解答
// int main(){
//     int n;
//     int x;
//     vector<int> X;

//     int sum=0;
//     int min_sum = INT_MAX;

//     cin >> n;
//     for (int i = 0; i < n; i++){
//         cin >> x;
//         X.push_back(x);
//     }

//     int max = *max_element(X.begin(), X.end());
//     for (int i = 1; i <= max; i++){
//         sum = 0;
//         for (auto p: X){
//             sum += pow(p-i,2);
//         }
//         if(min_sum > sum){
//             min_sum = sum;
//         }
//     }
//     cout << min_sum << endl;
// }
// 解説　計算量に着目
int main()
{
  int         n;
  int         x;
  vector<int> X;
  int         sum_value = 0;
  int         min_sum   = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    X.push_back(x);
  }
  for (auto i : X) {
    sum_value += i;
  }

  int p = round((float)sum_value / n);  // そのままだとint型同士の割り算になることに注意
  for (auto i : X) {
    min_sum += pow(i - p, 2);
  }
  cout << min_sum << endl;
}
