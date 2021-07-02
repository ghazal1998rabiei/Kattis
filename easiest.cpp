#include <bits/stdc++.h>
using namespace std;

int N;

int sum_digits(int x){
    int sum_ = 0;
    while(x){
        sum_ += x % 10;
        x /= 10;
    }
    return sum_;
}

int main(){
    while(1){
        cin >> N;
        if(N == 0)
            break;
        int x = 11;
        while(1){
            if(sum_digits(x * N) == sum_digits(N)){
                cout << x << endl;
                break;
            }
            x++;
        }
    }
}