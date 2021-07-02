#include <bits/stdc++.h>
using namespace std;

string s;
set<char> vowels{'a', 'e', 'i', 'o', 'u'};

int main(){
    getline(cin, s);
    string ans = "";
    int i = 0;
    int size_ = s.size();
    while(i < size_){
        ans += s[i];
        if(i + 2 < size_ && s[i + 1] == 'p' && s[i] == s[i + 2] && vowels.find(s[i]) != vowels.end())
                i += 3;
        else
            i++;
    }
    cout << ans << endl;
}