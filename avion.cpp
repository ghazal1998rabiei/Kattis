#include <bits/stdc++.h>
using namespace std;

string s;

int main(){
    bool found = 0;
    for(int i = 1; i <= 5; i++){
        cin >> s;
        int size_ = s.size();
        for(int k = 0; k < size_ - 2; k++)
            if(s.substr(k, 3) == "FBI"){
                found = 1;
                cout << i << " ";
                break;
            }
    }
    if(!found)
        cout << "HE GOT AWAY!";
    cout << endl;
}