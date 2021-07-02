#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265359

double r;
int m, c;

int main(){
    while(1){
        cin >> r >> m >> c;
        if(r + m + c == 0)
            break;
        double square_area = 4 * r * r;
        cout << fixed << setprecision(8) << PI * r * r << " " << (double)c / m * square_area << endl;
    }
}