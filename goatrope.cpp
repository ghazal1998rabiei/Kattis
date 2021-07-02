#include <bits/stdc++.h>
using namespace std;

double x, y, x1, y11, x2, y2;

double dis(double px, double py, double qx, double qy){
    double dx = px - qx, dy = py - qy;
    return sqrt(dx * dx + dy * dy);
}

int main(){
    cout << fixed << setprecision(4);
    cin >> x >> y >> x1 >> y11 >> x2 >> y2;
    if(x <= x1){
        if(y <= y11)
            cout << dis(x, y, x1, y11) << endl;
        else if(y <= y2)
            cout << x1 - x << endl;
        else
            cout << dis(x, y, x1, y2) << endl;
    }
    else if(x <= x2){
        if(y <= y11)
            cout << y11 - y << endl;
        else
            cout << y - y2 << endl;
    }
    else{
        if(y <= y11)
            cout << dis(x, y, x2, y11) << endl;
        else if(y <= y2)
            cout << x - x2 << endl;
        else
            cout << dis(x, y, x2, y2) << endl;
    }
}