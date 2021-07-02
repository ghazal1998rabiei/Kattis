#include <bits/stdc++.h>
using namespace std;

int sum_digits(int y){
    int sum_ = 0;
    while(y){
        sum_ += y % 10;
        y /= 10;
    }
    return sum_;
}

int main(){
    int l, d, x;
    cin >> l >> d >> x;
    for(int i = l; i <= d; i++)
        if(sum_digits(i) == x){
            cout << i << endl;
            break;
        }
    for(int i = d; i >= l; i--)
        if(sum_digits(i) == x){
            cout << i << endl;
            break;
        }
}