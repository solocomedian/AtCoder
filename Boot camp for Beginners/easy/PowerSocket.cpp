# include<iostream>
# include<cstdio>
# include<cmath>

using namespace std;
// b-1個差し込み口を増やせばいいタップ一つでa-1個差し込み口が増える
int main(){
    int a,b;
    cin >> a >> b;
    int count = (b-1)/(a-1);
    if ((b-1)%(a-1) != 0){
        count += 1;
    }
    cout << count << endl;
}