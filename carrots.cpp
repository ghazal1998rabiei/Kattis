#include <bits/stdc++.h>
using namespace std;

int n, ans;

int main(){
    cin >> n >> ans;
    string s;
    cin.ignore();
    while(n--)
        getline(cin, s); 
    cout << ans << endl;   
}