#include <bits/stdc++.h>
using namespace std;

int t;
double X, Y, sum_, product;

int main(){
    cin >> t;
    while(t--){
        cin >> X >> Y;
        sum_ = X + Y, product = X * Y;
        double h = (4 * sum_ - sqrt(16 * sum_ * sum_ - 48 * product)) / 24;
        cout << fixed << setprecision(7) << (X - 2 * h) * (Y - 2 * h) * h << endl; 
    }
}