#include <bits/stdc++.h>
using namespace std;

string s, alphabet;
set<char> chars;
int guessed = 0, hangman = 0;

int main(){
    cin >> s >> alphabet;
    for(char c: s)
        chars.insert(c);
    for(char c: alphabet){
        if(chars.find(c) != chars.end()){
            guessed++;
            if(guessed == chars.size()){
                cout << "WIN" << endl;
                break;
            }
        }
        else{
            hangman++;
            if(hangman == 10){
                cout << "LOSE" << endl;
                break;
            }
        }
    }
}