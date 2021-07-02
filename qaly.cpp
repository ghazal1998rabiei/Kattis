#include <bits/stdc++.h>
using namespace std;

int n;
double x, y;

int main(){
    cout << fixed << setprecision(4);
    cin >> n;
    double ans = 0;
    while(n--){
        cin >> x >> y;
        ans += x * y;
    }
    cout << ans << endl;
}