#include <bits/stdc++.h>
using namespace std;

int r;
string s;
char alphabet[28 + 3];

int main(){
    for(int i = 0; i < 26; i++)
        alphabet[i] = 'A' + i;
    alphabet[26] = '_', alphabet[27] = '.';
    while(1){
        cin >> r;
        if(!r)
            break;
        cin >> s;
        reverse(s.begin(), s.end());
        string ans = "";
        for(char c: s){
            int x = c - 'A';
            if(c == '_')
                x = 26;
            else if(c == '.')
                x = 27;
            ans += alphabet[(x + r) % 28];
        }
        cout << ans << endl;
    }
}