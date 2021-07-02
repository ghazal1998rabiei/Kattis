#include <bits/stdc++.h>
using namespace std;

string y, p;
set<char> vowels{'a', 'i', 'o', 'u'};

int main(){
    cin >> y >> p;
    int size_ = y.size();
    if(y[size_ - 1] == 'e')
        cout << y + 'x' + p << endl;
    else if(y.substr(size_ - 2) == "ex")
        cout << y + p << endl;
    else if(vowels.find(y[size_ - 1]) != vowels.end())
        cout << y.substr(0, size_ - 1) + "ex" + p << endl;
    else
        cout << y + "ex" + p << endl;
}