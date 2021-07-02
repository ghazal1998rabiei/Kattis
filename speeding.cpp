#include <bits/stdc++.h>
using namespace std;

int n, t, d, ans = INT_MIN, prevt, prevd;

int main(){
    cin >> n >> prevt >> prevd;
    n--;
    while(n--){
        cin >> t >> d;
        ans = max(ans, (d - prevd) / (t - prevt));
        prevt = t, prevd = d;
    }
    cout << ans << endl;
}