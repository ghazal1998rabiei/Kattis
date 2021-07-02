#include <bits/stdc++.h>
using namespace std;

int t;
string s;

int main(){
    cin >> t;
    while(t--){
        cin >> s;
        int n = sqrt(s.size());
        for(int j = n - 1; j >= 0; j--)
            for(int i = 0; i < n; i++)
                cout << s[n * i + j];
        cout << endl;
    }
}