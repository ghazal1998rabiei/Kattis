#include <bits/stdc++.h>
using namespace std;

int n;
double v0, angle, x1, h1, h2, pi = 3.14159265359;

int main(){
    cin >> n;
    while(n--){
        cin >> v0 >> angle >> x1 >> h1 >> h2;
        angle = angle * pi / 180;
        double t = x1 / (v0 * cos(angle));
        double h = v0 * t * sin(angle) - 0.5 * 9.81 * t * t;
        cerr << h << endl;
        if(h2 - h >= 1 && h - h1 >= 1)
            cout << "Safe" << endl;
        else
            cout << "Not Safe" << endl;
    }
}