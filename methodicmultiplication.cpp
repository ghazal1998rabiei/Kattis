#include <bits/stdc++.h>
using namespace std;

string x, y;
int s_x = 0, s_y = 0;

int main(){
    cin >> x >> y;
    for(char c: x)
        if(c == 'S')
            s_x++;
    for(char c: y)
        if(c == 'S')
            s_y++;
    for(int i = 0; i < s_x * s_y; i++)
            cout << "S(";
    cout << '0';
    for(int j = 0; j < s_x * s_y; j++)
        cout << ')';
    cout << endl;
}