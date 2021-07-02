#include <bits/stdc++.h>
using namespace std;

string s;

int main(){
    cin >> s;
    for(char c: s)
        if(c >= 'A' && c <= 'Z')
            cout << c;
    cout << endl;
}