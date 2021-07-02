#include <bits/stdc++.h>
using namespace std;

int n, x, ans = INT_MAX, ans_i;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x < ans)
            ans = x, ans_i = i;
    }
    cout << ans_i << endl;
}