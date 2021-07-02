#include <bits/stdc++.h>
using namespace std;

int n, first_radii, radii;

int gcd(int a, int b){
    if(!b)
        return a;
    return gcd(b, a % b);
}

int main(){
    cin >> n >> first_radii;
    for(int i = 1; i < n; i++){
        cin >> radii;
        int x = gcd(first_radii, radii);
        cerr << x << endl;
        cout << first_radii / x << "/" << radii / x << endl;
    }
}