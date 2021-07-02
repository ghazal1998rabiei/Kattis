#include <bits/stdc++.h>
using namespace std;

string s;
double space = 0, lower = 0, upper, symbol = 0;
int n;

int main(){
    cin >> s;
    n = s.size();
    for(char c: s){
        if(c == '_')
            space++;
        else if(c >= 'a' && c <= 'z')
            lower++;
        else if(c >= 'A' && c <= 'Z')
            upper++;
        else
            symbol++;
    }
    cout << fixed << setprecision(7) << space / n << endl << lower / n << endl << upper / n << endl << symbol / n << endl;
}