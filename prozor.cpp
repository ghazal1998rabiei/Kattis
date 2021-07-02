#include <bits/stdc++.h>
using namespace std;

int r, c, k;
char g[103][103], ans_g[103][103], tmp_g[103][103];

int main(){
    cin >> r >> c >> k;
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> g[i][j];
    int ans = INT_MIN;
    for(int i = 0; i <= r - k; i++)
        for(int j = 0; j <= c - k; j++){
            for(int ii = 0; ii < r; ii++)
                for(int jj = 0; jj < c; jj++)
                    tmp_g[ii][jj] = g[ii][jj];
            int flies = 0;
            for(int ki = 0; ki < k; ki++)
                for(int kj = 0; kj < k; kj++){
                    bool on_side = 0;
                    if(ki == 0 || ki == k - 1 || kj == 0 || kj == k - 1)
                        on_side = 1;
                    if(on_side){
                        if(ki == 0 && (kj == 0 || kj == k - 1))
                            tmp_g[i + ki][j + kj] = '+';
                        else if(ki == k - 1 && (kj == 0 || kj == k - 1))
                            tmp_g[i + ki][j + kj] = '+';
                        else if(ki == 0 || ki == k - 1)
                            tmp_g[i + ki][j + kj] = '-';
                        else
                            tmp_g[i + ki][j + kj] = '|';
                    }
                    else
                        tmp_g[i + ki][j + kj] = g[i + ki][j + kj];
                    if(g[i + ki][j + kj] == '*' && !on_side)
                        flies++;
                }
                if(ans < flies){
                    ans = flies;
                    for(int ii = 0; ii < r; ii++)
                        for(int jj = 0; jj < c; jj++)
                            ans_g[ii][jj] = tmp_g[ii][jj];
                }
        }
        cout << ans << endl;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++)
                cout << ans_g[i][j];
            cout << endl;
        }
}