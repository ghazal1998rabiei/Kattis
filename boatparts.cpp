#include <bits/stdc++.h>
using namespace std;

int n, d;
set<string> parts;
string s;

int main(){
    cin >> n >> d;
    int  complete = 0;
    for(int i = 1; i <= d; i++){
        cin >> s;
        parts.insert(s);
        if(parts.size() == n && !complete)
            complete = i;
    }
    if(!complete)
        cout << "paradox avoided" << endl;
    else
        cout << complete << endl;
}