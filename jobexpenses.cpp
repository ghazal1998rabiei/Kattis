#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n;
    long long int ans = 0;
    while(n--){
        cin >> x;
        if(x < 0)
            ans += -x;
    }
    cout << ans << endl;
}