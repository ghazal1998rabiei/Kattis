#include <bits/stdc++.h>
using namespace std;

string s;
vector<string> whites, blacks;
char grid[17][34]{
    "+---+---+---+---+---+---+---+---+",
    "|...|:::|...|:::|...|:::|...|:::|",
    "+---+---+---+---+---+---+---+---+",
    "|:::|...|:::|...|:::|...|:::|...|",
    "+---+---+---+---+---+---+---+---+",
    "|...|:::|...|:::|...|:::|...|:::|",
    "+---+---+---+---+---+---+---+---+",
    "|:::|...|:::|...|:::|...|:::|...|",
    "+---+---+---+---+---+---+---+---+",
    "|...|:::|...|:::|...|:::|...|:::|",
    "+---+---+---+---+---+---+---+---+",
    "|:::|...|:::|...|:::|...|:::|...|",
    "+---+---+---+---+---+---+---+---+",
    "|...|:::|...|:::|...|:::|...|:::|",
    "+---+---+---+---+---+---+---+---+",
    "|:::|...|:::|...|:::|...|:::|...|",
    "+---+---+---+---+---+---+---+---+"
};
int r, c;

int main(){
    getline(cin, s);
    s = s.substr(7);
    stringstream ss(s);
    while(ss.good()){
        string substr;
        getline(ss, substr, ',');
        if(substr != "")
            whites.push_back(substr);
    }
    getline(cin, s);
    s = s.substr(7);
    stringstream ss2(s);
    while(ss2.good()){
        string substr;
        getline(ss2, substr, ',');
        if(substr != "")
            blacks.push_back(substr);
    }
    for(string x: whites){
        r = (8 - (x.back() - '0')) * 2 + 1;
        x.pop_back();
        c = (x.back() - 'a' + 1) * 4 - 2;
        x.pop_back();
        if(x == "")
            grid[r][c] = 'P';
        else
            grid[r][c] = x[0];
    }
    for(string x: blacks){
        r = (8 - (x.back() - '0')) * 2 + 1;
        x.pop_back();
        c = (x.back() - 'a' + 1) * 4 - 2;
        x.pop_back();
        if(x == "")
            grid[r][c] = 'p';
        else
            grid[r][c] = (x[0] - 'A') + 'a';
    }
    for(int i = 0; i < 17; i++){
        for(int j = 0; j < 33; j++)
            cout << grid[i][j];
        cout << endl;
    }
}