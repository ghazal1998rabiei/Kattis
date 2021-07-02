#include <bits/stdc++.h>
using namespace std;

int a, b;

int main(){
    while(1){
        cin >> a >> b;
        if(a + b == 0)
            break;
        cout << a / b << " " << a % b << " / " << b << endl;
    }
}