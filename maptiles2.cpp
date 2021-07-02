#include <bits/stdc++.h>
using namespace std;

string s;
int row = 0, column = 0;

int main(){
    cin >> s;
    int size_ = s.size();
    cout << size_ << " ";
    int factor = 1;
    for(int i = size_ - 1; i >= 0; i--){
        row += (((s[i] - '0') / 2 == 1) ? factor : 0);
        column += (((s[i] - '0') % 2 == 1) ? factor : 0);
        factor *= 2;
    }
    cout << column << " " << row << endl;
}