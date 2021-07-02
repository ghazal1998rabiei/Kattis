#include <bits/stdc++.h>
using namespace std;

set<string> text;
string ans;
int n;

int main(){
    string s;
    cin >> s;
    n = s.size();
    for(int i = 0; i < n; i += n / 3){
        string sub = s.substr(i, n / 3);
        if(text.find(sub) == text.end())
            text.insert(sub);
        else{
            ans = sub;
            break;
        }
    }
    cout << ans << endl;
}