#include <bits/stdc++.h>
using namespace std;

int W, sum_ = 0, w, l, n;

int main(){
    cin >> W >> n;
    while(n--){
        cin >> w >> l;
        sum_ += w * l;
    }
    cout << sum_ / W << endl;
}