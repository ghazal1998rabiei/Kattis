#include <bits/stdc++.h>
using namespace std;

const double PI = 3.14159265359;

int main(){
    int h, v;
    cin >> h >> v;
    double ans = h / sin(v * PI / 180);
    if(ans == (int)ans)
        cout << ans << endl;
    else
        cout << (int)ans + 1 << endl;
}