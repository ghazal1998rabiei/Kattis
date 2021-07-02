#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, ans = "";
    cin >> s;
    int i = 0, j;
    while(i < s.size()){
        ans += s[i];
        j = i;
        while(s[i] == s[j])
            j++;
        i = j;
    }
    cout << ans << endl;
}