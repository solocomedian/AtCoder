# include<iostream>
# include<cstdio>
# include<cmath>
# include <vector>
using namespace std;
// n回停車後の総和ではなく、最も乗車人数が少なくなるi回目を考える。
int main(){
    int n;
    long long m = 0;
    long long p = 0;
    cin >> n;
    vector<long long> v(n);
    for (int i= 0 ; i < n; i++){
        cin >> v[i];
    }
    for (int i=0; i<n; i++){
        p = max(p+v[i], m); // 乗車人数が0より小さくなる場合はその分の乗車人数を補填、
                            // 0ではなくmなのはlong int と intは型が違うので比較できないため
    }

    cout << p << endl;

}