#include <bits/stdc++.h>
using namespace std;

int main(){
    int e, f, c;
    cin >> e >> f >> c;
    int sum_ = e + f, ans = 0;
    while(sum_ >= c){
        int res = sum_ % c;
        ans += sum_ / c;
        sum_ /= c;
        sum_ += res;
    }
    cout << ans << endl;
}