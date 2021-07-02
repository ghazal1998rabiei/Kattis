#include <bits/stdc++.h>
using namespace std;

int p, k, n;

int main(){
    cin >> p;
    while(p--){
        cin >> k;
        cout << k << " ";
        cin >> n;
        cout << n + n * (n + 1) / 2 << endl;
    }
}