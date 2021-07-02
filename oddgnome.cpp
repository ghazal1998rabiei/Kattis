#include <bits/stdc++.h>
using namespace std;

int n, g, x, prevx, king;

int main(){
    cin >> n;
    while(n--){
        bool found = 0;
        cin >> g >> prevx;
        for(int i = 2; i <= g; i++){
            cin >> x;
            if(!found && x != prevx + 1){
                found = 1;
                king = i;
            }
            prevx = x;
        }
        cout << king << endl;
    }
}