#include <bits/stdc++.h>
using namespace std;

string s, key, ans = "";

int main(){
    cin >> s >> key;
    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0)
            ans += ((s[i] - 'A' - (key[i] - 'A') + 26) % 26) + 'A';
        else
            ans += ((s[i] - 'A' + (key[i] - 'A')) % 26) + 'A';
    }
    cout << ans << endl;
}