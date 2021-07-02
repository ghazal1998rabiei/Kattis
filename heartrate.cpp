#include <bits/stdc++.h>
using namespace std;

int n;
double b, p;

int main(){
    cin >> n;
    while(n--){
        cin >> b >> p;
        cout << fixed << setprecision(4) << 60 * (b - 1) / p << " " << 60 * b / p << " " << 60 * (b + 1) / p << endl;
    }
}