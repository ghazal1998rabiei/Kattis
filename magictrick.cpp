#include <bits/stdc++.h>
using namespace std;

set<char> chars;

int main(){
    string s;
    cin >> s;
    for(char c: s){
        if(chars.find(c) != chars.end()){
            cout << 0 << endl;
            return 0;
        }
        chars.insert(c);
    }
    cout << 1 << endl;
}