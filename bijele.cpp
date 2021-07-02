#include <bits/stdc++.h>
using namespace std;

int a, valid[6]{1, 1, 2, 2, 2, 8};

int main(){
    for(int i = 0; i < 6; i++)
        cin >> a, cout << valid[i] - a << " ";
    cout << endl;
}