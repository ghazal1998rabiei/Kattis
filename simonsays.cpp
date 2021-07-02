#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main(){
    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin, s);
        if(s.substr(0, 10) == "Simon says")
            cout << s.substr(11) << endl;
    }
}