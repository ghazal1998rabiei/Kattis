#include <bits/stdc++.h>
using namespace std;

string s, t = "";

int main(){
    cin >> s;
    for(int i = 0; i < s.size() / 3; i++)
        t += "PER";
    int ans = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] != t[i])
            ans++;
    cout << ans << endl;
}