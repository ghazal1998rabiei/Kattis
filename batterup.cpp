#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x, m = 0;
    double sum_ = 0;
    while(n--){
        cin >> x;
        if(x == -1)
            continue;
        m++, sum_ += x;
    }
    cout << fixed << setprecision(4) << sum_ / m << endl;
}