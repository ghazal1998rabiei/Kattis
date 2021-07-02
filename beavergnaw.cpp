#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265359

double D, V;

int main(){
    while(1){
        cin >> D >> V;
        if(D + V == 0)
            break;
        cout << fixed << setprecision(7) << pow(pow(D, 3) - (6 * V) / PI , 1.0 / 3) << endl;
    }
}