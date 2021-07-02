#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int r = 2;
    while(n--)
        r += r - 1;
    cout << r * r << endl;
}