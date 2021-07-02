#include <bits/stdc++.h>
using namespace std;

int n;
string s;
set<char> chars;

int main(){
    cin >> n;
    cin.ignore();
    while(n--){
        chars.clear();
        getline(cin, s);
        for_each(s.begin(), s.end(), [](char & c){c = tolower(c);});
        for(char c: s)
            if(c >= 'a' && c <= 'z')
                chars.insert(c);
        if(chars.size() == 26)
            cout << "pangram" << endl;
        else{
            cout << "missing ";
            for(char c = 'a'; c <= 'z'; c++)
                if(chars.find(c) == chars.end())
                    cout << c;
            cout << endl;
        }
    }
}