#include <bits/stdc++.h>
using namespace std;

int prevy, ans, x;

int main(){
    int t;
    cin >> t;
    while(t--){
        ans = 0;
        cin >> prevy;
        while(1){
            cin >> x;   
            if(!x)
                break;
            if(x > prevy * 2)
                ans += x - prevy * 2;
            prevy = x;
        }
        cout << ans << endl;
    }
}