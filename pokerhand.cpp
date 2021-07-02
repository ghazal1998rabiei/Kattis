#include <bits/stdc++.h>
using namespace std;

map<char, int> mp;
string s;

int main(){
    for(int i = 0; i < 5; i++)
        cin >> s, mp[s[0]]++;
    int ans = INT_MIN;
    for(auto p: mp)
        ans = max(ans, p.second);
    cout << ans << endl;
}