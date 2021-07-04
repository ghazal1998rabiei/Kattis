#include <bits/stdc++.h>
using namespace std;

int n, w, b, cnt = 0;
char g[24 + 3][24 + 3];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> g[i][j];
    for(int i = 0; i < n; i++){
        w = 0, b = 0;
        for(int j = 0; j < n; j++){
            if(g[i][j] == 'W')
                w++;
            else
                b++;
            if(j < n - 2)
                if(g[i][j] == g[i][j + 1] && g[i][j + 1] == g[i][j + 2]){
                    cout << 0 << endl;
                    return 0;
                }
        }
        if(w != b){
            cout << 0 << endl;
            return 0;
        }
    }
    for(int j = 0; j < n; j++){
        w = 0, b = 0;
        for(int i = 0; i < n; i++){
            if(g[i][j] == 'W')
                w++;
            else
                b++;
            if(i < n - 2)
                if(g[i][j] == g[i + 1][j] && g[i + 1][j] == g[i + 2][j]){
                    cout << 0 << endl;
                    return 0;
                }
        }
        if(w != b){
            cout << 0 << endl;
            return 0;
        }
    }
    cout << 1 << endl;
}