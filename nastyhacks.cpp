#include <bits/stdc++.h>
using namespace std;

int n, r, e, c;

int main(){
    cin >> n;
    while(n--){
        cin >> r >> e >> c;
        if(r + c == e)
            cout << "does not matter" << endl;
        else if(r + c < e)
            cout << "advertise" << endl;
        else
            cout << "do not advertise" << endl;
    }
}