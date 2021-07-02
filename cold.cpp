#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, ans = 0;
    cin >> n;
    while(n--){
        cin >> x;
        if(x < 0)
            ans++;
    }
    cout << ans << endl;
}