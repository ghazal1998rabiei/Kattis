#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y, n;
    cin >> x >> y >> n;
    for(int i = 1; i <= n; i++){
        bool found = 0;
        if(i % x == 0)
            found = 1, cout << "Fizz";
        if(i % y == 0)
            found = 1, cout << "Buzz";
        if(!found)
            cout << i;
        cout << endl;
    }
}