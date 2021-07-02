#include <bits/stdc++.h>
using namespace std;

int k, a = 1, b = 0;

int main(){
    cin >> k;
    while(k--){
        int tmp = a;
        a = b;
        b += tmp;
    }
    cout << a << " " << b << endl;
}