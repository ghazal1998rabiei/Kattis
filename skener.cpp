#include <bits/stdc++.h>
using namespace std;

int r, c, zr, zc;
char g[53][53];

int main(){
    cin >> r >> c >> zr >> zc;
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> g[i][j];
    for(int i = 0; i < r; i++)
        for(int k = 0; k < zr; k++){
            for(int j = 0; j < c; j++)
                for(int k = 0; k < zc; k++)  
                    cout << g[i][j];
            cout << endl;
        }
}