#include <bits/stdc++.h>
using namespace std;

int x, n;

int main(){
    cin >> x >> n;
    int ans = x;
    while(n--){
        int y;
        cin >> y;
        ans += x - y;
    }
    cout << ans << endl;
}