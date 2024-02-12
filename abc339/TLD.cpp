# include<iostream>
# include<cstdio>
# include<cmath>

using namespace std;

int main(){
    int n = 0;
    string s;
    cin >> s;
    int len = s.size();
    for (int i = 0; i < len; i++){
        if (s[i] == '.'){
            n=i;
        }
    }
    cout << s.substr(n+1) << endl;

}