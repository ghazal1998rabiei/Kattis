#include <bits/stdc++.h>
using namespace std;

int main(){
    int l, r;
    cin >> l >> r;
    if(l == r){
        if(l == 0)
            cout << "Not a moose" << endl;
        else
            cout << "Even " << l + r << endl;
    }
    else
        cout << "Odd " << 2 * max(l, r) << endl;
}