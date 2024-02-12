# include<iostream>
# include<cstdio>
# include<cmath>
# include <vector>

using namespace std;

int main(){
    int num;
    int q1, q2;
    vector<int> Q ;
    cin >> num;
    for (int i=0; i < num; i++){
        cin >> q1 >> q2;
        if(q1 == 1){
            Q.push_back(q2);
        } else{
            cout << Q[Q.size()-q2] << endl;
        }
    }
}