#include <bits/stdc++.h>
using namespace std;

int n;
string s1, s2;

int main(){
    cin >> n;
    while(n--){
        cin >> s1 >> s2;
        cout << s1 << endl << s2 << endl;
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] == s2[i])
                cout << '.';
            else
                cout << '*';
        }
        cout << endl << endl;
    }
}