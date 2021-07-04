#include <bits/stdc++.h>
using namespace std;

string s;
int chars[26 + 3];

int main(){
    cin >> s;
    for(char c: s)
        chars[c - 'a']++;
    int odd = 0;
    for(int i = 0; i < 26; i++)
        if(chars[i] % 2)
            odd++;
    if(odd == 1 || odd == 0)
        cout << 0 << endl;
    else
        cout << odd - 1 << endl;
}