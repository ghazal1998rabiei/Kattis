#include <bits/stdc++.h>
using namespace std;

int t, a, b, c;

int main(){
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        int max_ = max(a, b), min_ = min(a, b);
        if(max_ + min_ == c || max_ - min_ == c || max_ * min_ == c || (max_ % min_ == 0 && max_ / min_ == c))
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }
}