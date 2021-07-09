#include <bits/stdc++.h>
using namespace std;

string s;
int words_cnt = 0, ans = 0;

int main(){
    getline(cin, s);
    stringstream ss(s);
    string word;
    while(ss >> word){
        if(word.find("ae") != string::npos)
            ans++;
        words_cnt++;
    }
    if(ans >= 0.4 * words_cnt)
        cout << "dae ae ju traeligt va" << endl;
    else
        cout << "haer talar vi rikssvenska" << endl;
}