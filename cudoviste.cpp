#include <bits/stdc++.h>
using namespace std;

int r, c;
char g[53][53];
int ans[5];

int main(){
    cin >> r >> c;
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> g[i][j];
    for(int i = 0; i < r - 1; i++)
        for(int j = 0; j < c - 1; j++){
            bool building = 0;
            int sum_ = 0;
            for(int k = 0; k < 2; k++){
                for(int z = 0; z < 2; z++){
                    if(g[i + k][j + z] == '#'){
                        building = 1;
                        break;
                    }
                    if(g[i + k][j + z] == 'X')
                        sum_++;
                }
                if(building)
                    break;
            }
            if(!building)
            ans[sum_]++;
        }
    for(int i = 0; i < 5; i++)
        cout << ans[i] << endl;
}