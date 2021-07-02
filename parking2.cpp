#include <bits/stdc++.h>
using namespace std;

int t, n, a[23];

int main(){
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int ans = 0;
        for(int i = 0; i < n - 1; i++)
            ans += a[i + 1] - a[i];
        cout << ans * 2 << endl;
    }
}