#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main(){
    cin >> n;
    while(n--){
        cin >> s;
        if(s == "P=NP")
            cout << "skipped" << endl;
        else{
            int indx = s.find_first_of('+');
            int a = stoi(s.substr(0, indx)), b = stoi(s.substr(indx + 1));
            cout << a + b << endl;
        }
    }
}