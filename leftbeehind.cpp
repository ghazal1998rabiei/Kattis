#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    while(1){
        cin >> x >> y;
        if(x + y == 0)
            break;
        if(x + y == 13)
            cout << "Never speak again." << endl;
        else if(x > y)
            cout << "To the convention." << endl;
        else if(x == y)
            cout << "Undecided." << endl;
        else
            cout << "Left beehind." << endl;
    }
}