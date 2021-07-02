#include <bits/stdc++.h>
using namespace std;

int n, p, s, m, x;

int main(){
    cin >> n >> p >> s;
    while(s--){
        cin >> m;
        bool keep = 0;
        while(m--){
            cin >> x;
            if(x == p)
                keep = 1;
        }
        if(keep)
            cout << "KEEP" << endl;
        else
            cout << "REMOVE" << endl;
    }
}