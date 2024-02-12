# include<iostream>
# include<cstdio>
# include<cmath>
# include <vector>

using namespace std;

int main(){
    int h = 0;
    int w = 0;
    int n;
    int h0= 0;
    int w0= 0; 
    int direction = 0;
    cin >> h >> w >> n;
    vector<vector<char>> Grid(h, vector<char>(w,'.'));

    for (int i = 0; i < n; i++){
        if (Grid[h0][w0] == '.'){
            Grid[h0][w0] = '#';
            direction += 1;
        } else {
            Grid[h0][w0] = '.';
            direction -= 1;
        }

        int r = direction % 4;

        if(r == 0){
            h0 -= 1;
        } else if(r == 1){
            w0 += 1;
        } else if(r == 2){
            h0 += 1;
        } else {
            w0 -= 1;
        }

        h0 = (h0 % h + h) % h;
        w0 = (w0 % w + w) % w;
    }

    for (int i = 0; i < h; i++){
        for (int k = 0; k < w; k++){
            cout << Grid[i][k];
        }
        cout << endl;
    }
    cout << endl;
}