#include <bits/stdc++.h>
using namespace std;

int c, n, v1, v2, v3;

int main(){
    cin >> c >> n;
    bool satisfactory = 1;
    if(c < 8)
        satisfactory = 0;
    while(c--){
        cin >> v1 >> v2 >> v3;
        if(v1 == v2 || v2 == v3 || v1 == v3)
            satisfactory = 0;
    }
    if(satisfactory)
        cout << "satisfactory" << endl;
    else
        cout << "unsatisfactory" << endl;
}