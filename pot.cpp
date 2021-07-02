#include <bits/stdc++.h>
using namespace std;

int n, x, ans = 0;

int main(){
    cin >> n;
    while(n--){
        cin >> x;
        int p = 1;
        for(int i = 0; i < x % 10; i++)
            p *= (x / 10);
        ans += p;
    }
    cout << ans << endl;
}