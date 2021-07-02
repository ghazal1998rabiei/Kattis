#include <bits/stdc++.h>
using namespace std;

int n, s, t, prevt;

int main(){
    while(1){
        cin >> n;
        if(n == -1)
            break;
        prevt = 0;
        int sum_ = 0;
        while(n--){
            cin >> s >> t;
            sum_ += s * (t - prevt);
            prevt = t;
        }
        cout << sum_ << " miles" << endl;
    }
}