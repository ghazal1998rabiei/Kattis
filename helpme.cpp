#include <bits/stdc++.h>
using namespace std;

string s;
int r = 8;
char c;
vector<string> whites, blacks;
map<char, int> priority{{'K', 0}, {'Q', 1}, {'R', 2}, {'B', 3}, {'N', 4}, {'P', 5}};

bool black_cmp(string & s1, string & s2){
    if(priority[s1[0]] > priority[s2[0]])
        return false;
    if(priority[s1[0]] == priority[s2[0]]){
        if(s1[2] == s2[2])
            return s1[1] - 'a' < s2[1] - 'a';
        return (s1[2] - '0') > (s2[2] - '0');
    }
    return true;
}

bool white_cmp(string & s1, string & s2){
    if(priority[s1[0]] > priority[s2[0]])
        return false;
    if(priority[s1[0]] == priority[s2[0]]){
        if(s1[2] == s2[2])
            return s1[1] - 'a' < s2[1] - 'a';
        return (s1[2] - '0') < (s2[2] - '0');
    }
    return true;
}

int main(){
    getline(cin, s);
    while(getline(cin, s)){
        stringstream ss(s);
        ss >> c;
        char col = 'a';
        while(ss >> c){
            ss >> c;
            if(c >= 'A' && c <= 'Z'){
                string tmp = "";
                tmp += c;
                tmp += col;
                tmp += to_string(r);
                whites.push_back(tmp);
            }
            else if(c >= 'a' && c <= 'z'){
                string tmp = "";
                tmp += c - 'a' + 'A';
                tmp += col;
                tmp += to_string(r);
                blacks.push_back(tmp);
            }
            col += 1;
            ss >> c >> c;
        }
        getline(cin, s);
        r--;
    }
    sort(blacks.begin(), blacks.end(), black_cmp);
    sort(whites.begin(), whites.end(), white_cmp);
    cout << "White: ";
    if(whites.size()){
        cout << whites[0];
        for(int i = 1; i < whites.size(); i++){
            cout << ',';
            if(whites[i][0] == 'P')
                cout << whites[i].substr(1);
            else
                cout << whites[i];
        }
    }
    cout << "\nBlack: ";
    if(blacks.size()){
        cout << blacks[0];
        for(int i = 1; i < blacks.size(); i++){
            cout << ',';
            if(blacks[i][0] == 'P')
                cout << blacks[i].substr(1);
            else
                cout << blacks[i];
        }
    }
    cout << endl;
}