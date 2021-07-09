#include <bits/stdc++.h>
using namespace std;

int n, x;

int main(){
    cin >> n;
    while(n--){
        cin >> x;
        if(x % 2)
            cout << x << " is odd" << endl;
        else
            cout << x << " is even" << endl;
    }
}