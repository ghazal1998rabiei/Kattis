#include <bits/stdc++.h>
using namespace std;

int t, c;

int main(){
    cin >> t;
    while(t--){
        cin >> c;
        cout << c / 400 + ((c % 400) ? 1 : 0) << endl;
    }
}