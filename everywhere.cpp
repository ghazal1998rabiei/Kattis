#include <bits/stdc++.h>
using namespace std;

int t, n;
string x;
set<string> s;

int main(){
    cin >> t;
    while(t--){
        s.clear();
        cin >> n;
        while(n--){
            cin >> x;
            s.insert(x);
        }
        cout << s.size() << endl;
    }
}