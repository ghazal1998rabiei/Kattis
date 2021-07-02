#include <bits/stdc++.h>
using namespace std;

double x1, y11, x2, y2, p;

int main(){
    while(1){
        cin >> x1;
        if(x1 == 0)
            break;
        cin >> y11 >> x2 >> y2 >> p;
        cout << fixed << setprecision(5);
        double dx = fabs(x1 - x2), dy = fabs(y11 - y2);
        cout << pow(pow(dx, p) + pow(dy, p), (1.0 / p)) << endl;
    }
}