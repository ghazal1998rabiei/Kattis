#include <bits/stdc++.h>
using namespace std;

bool harshad(int x){
    int y = x, sum_ = 0;
    while(y){
        sum_ += y % 10;
        y /= 10;
    }
    return (x % sum_ == 0);
}

int main(){
    int n;
    cin >> n;
    while(1){
        if(harshad(n)){
            cout << n << endl;
            break;
        }
        n++;        
    }
}