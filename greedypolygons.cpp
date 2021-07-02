#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265359

int t, n, g;
double l, d;

int main(){
    cin >> t;
    while(t--){
        cin >> n >> l >> g >> d;
        d *= g;
        double polygon_area = n * 0.5 * l * l / 2 * tan(90 * (n - 2) * PI / 180 / n);
        cout << fixed << setprecision(7) << n * l * d + PI * d * d + polygon_area << endl;
    }
}