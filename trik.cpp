#include <bits/stdc++.h>
using namespace std;

map<pair<char, int>, int> moves{{{'A', 1}, 2},
                                {{'A', 2}, 1},
                                {{'C', 1}, 3},
                                {{'C', 3}, 1},
                                {{'B', 2}, 3},
                                {{'B', 3}, 2}};
string s;
int ans = 1;

int main(){
    cin >> s;
    for(char c : s)
        if(moves.find({c, ans}) != moves.end())
            ans = moves[{c, ans}];
    cout << ans << endl;
}