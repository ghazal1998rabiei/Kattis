#include <bits/stdc++.h>
using namespace std;

int t, r, c;
char g[23][23];

int main(){
    cin >> t;
    for(int k = 1; k <= t; k++){
        cout << "Test " << k << endl;
        cin >> r >> c;
        for(int i = 0; i < r; i++)
            for(int j = 0; j < c; j++)
                cin >> g[i][j];
        for(int i = r - 1; i >= 0; i--){
            for(int j = c - 1; j >= 0; j--)
                cout << g[i][j];
            cout << endl;
        }
    }
}