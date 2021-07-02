#include <bits/stdc++.h>
using namespace std;

int main(){
    double r, c;
    cin >> r >> c;
    cout << fixed << setprecision(7) << (r - c) * (r - c) / (r * r) * 100 << endl;
}