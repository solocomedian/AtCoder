# include<iostream>
# include<cstdio>
# include<cmath>
# include <vector>

using namespace std;

int main(){
    int a, b, d;
    cin >> a >> b >> d;
    int num = (b-a)/d + 1;
    for (int i = 0; i < num; i++){
        cout << a + i * d;
        cout << ' ';
    }
    cout << endl;
}