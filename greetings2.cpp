#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int first_indx = s.find_first_of('e'), last_indx = s.find_last_of('e');
    string x = "";
    for(int i = 0; i <= last_indx - first_indx; i++)
        x += "ee";
    cout << 'h' << x << 'y' << endl;
}