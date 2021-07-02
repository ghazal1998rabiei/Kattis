#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int w = 0, b = 0;
    for(char c: s){
        if(c == 'W')
            w++;
        else
            b++;
    }
    cout << ((b == w) ? 1 : 0) << endl;
}