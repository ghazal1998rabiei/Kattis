#include <bits/stdc++.h>
using namespace std;

string s;
set<string> words;

int main(){
    getline(cin, s);
    stringstream ss(s);
    string x;
    while(ss >> x){
        if(words.find(x) != words.end()){
            cout << "no" << endl;
            return 0;
        }
        words.insert(x);
    }
    cout << "yes" << endl;
}