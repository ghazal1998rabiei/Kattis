#include <bits/stdc++.h>
using namespace std;

int n, w;

int main(){
    cin >> n;
    int prev = INT_MIN;
    int ans = 0;
    while(n--){
        cin >> w;
        if(w > prev)
            ans++;
        prev = w;
    }
    cout << ans << endl;
}