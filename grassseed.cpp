#include <bits/stdc++.h>
using namespace std;

double c, wi, li;
int l;

int main(){
    cout << fixed << setprecision(7);
    cin >> c >> l;
    double sum_ = 0;
    while(l--){
        cin >> wi >> li;
        sum_ += c * li * wi;
    }
    cout << sum_ << endl;
}