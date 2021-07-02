#include <bits/stdc++.h>
using namespace std;

int n;
string s1, s2;
pair<int, string> cups[23];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s1 >> s2;
        if(s1[0] >= 'a' && s1[0] <= 'z')
            cups[i] = {stoi(s2), s1};
        else
            cups[i] = {stoi(s1) / 2, s2};
    }
    sort(cups, cups + n);
    for(int i = 0; i < n; i++)
        cout << cups[i].second << endl;
}