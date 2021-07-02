#include <bits/stdc++.h>
using namespace std;

int n, x;

int main(){
    cin >> n;
    int cnt = 1;
    bool good = 1;
    while(n--){
        cin >> x;
        if(x > cnt)
            while(cnt != x){
                good = 0;
                cout << cnt++ << endl;
            }
        cnt++;
    }
    if(good)
        cout << "good job" << endl;
}