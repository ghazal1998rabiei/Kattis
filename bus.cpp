#include <bits/stdc++.h>
using namespace std;

int t, k;

int main(){
    cin >> t;
    while(t--){
        cin >> k;
        k--;
        int ans = 1, factor = 1;
        while(k--){
            ans += 2 * factor;
            factor *= 2;
        }
        cout << ans << endl;
    }
}