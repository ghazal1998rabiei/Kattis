#include <bits/stdc++.h>
using namespace std;

map<char, int> mp;

int main(){
    string s;
    cin >> s;
    for(char c: s)
        mp[c]++;
    int ans = 0, min_ = INT_MAX;
    for(pair<char, int> p: mp)
        min_ = min(min_, p.second), ans += p.second * p.second;
    if(mp.size() == 3)
        ans += 7 * min_;
    cout << ans << endl;
}