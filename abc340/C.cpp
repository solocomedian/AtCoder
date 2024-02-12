# include<iostream>
# include<cmath>
# include <vector>

using namespace std;

int main(){
    unsigned long x;
    unsigned long total = 0;
    unsigned long count = 0;
    bool flg;
    unsigned long upper;
    unsigned long lower;
    unsigned long upper_b;
    cin >> x;
    unsigned long num = x;
    while(true){
        count += 1;
        unsigned long upper = num/2 + num % 2;
        unsigned long lower = num/2 ;
        if(upper == 2){
            if(lower == 2){
                total += x;
            } else {
                unsigned long k = pow(2,count);
                total += (x % k) * 2;
            }
        } else if (upper == 1){
            if( upper_b == 3 ){
                unsigned long k = pow(2,count);
                total += (x % k) * 2;
            }
            break;
        } else{
            total += x;
        }
        num = lower;
        upper_b = upper;
    }
    cout << total+x << endl;
}