#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    cin >> n;
    int ans = 0;
    while(n){
        int s, e;
        cin >> s;
        if(n == 1)
            break;
        cin >> e;
        ans += e - s;
        n -= 2;
    }
    if(n % 2)
        cout << "still running" << endl;
    else
        cout << ans << endl;
}