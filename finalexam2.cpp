#include <bits/stdc++.h>
using namespace std;

int n;
char a[1003];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int ans = 0;
    for(int i = 0; i < n - 1; i++)
        if(a[i] == a[i + 1])
            ans++;
    cout << ans << endl;
}