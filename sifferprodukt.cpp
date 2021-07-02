#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    while(x > 9){
        int tmp = x;
        int product = 1;
        while(tmp){
            if(tmp % 10 != 0)
                product *= (tmp % 10);
            tmp /= 10;
        }
        x = product;
    }
    cout << x << endl;
}