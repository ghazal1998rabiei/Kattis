#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int size_ = s.size();
    for(int i = 0; i < size_ - 1; i++)
        if(s.substr(i, 2) == "ss"){
            cout << "hiss" << endl;
            return 0;
        }
    cout << "no hiss" << endl;
}