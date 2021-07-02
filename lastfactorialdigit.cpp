#include <bits/stdc++.h>
using namespace std;

int n, x;

int main(){
    cin >> n;
    while(n--){
        cin >> x;
        if(x == 1 || x == 2 || x == 4)
            cout << x << endl;
        else if(x == 3)
            cout << 6 << endl;
        else
            cout << 0 << endl;
    }
}