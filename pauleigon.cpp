#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, p, q;
    cin >> n >> p >> q;
    if(((p + q) / n) % 2)
        cout << "opponent" << endl;
    else
        cout << "paul" << endl;
}