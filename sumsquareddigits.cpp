#include <bits/stdc++.h>
using namespace std;

int k, i, b, n;

int main(){
    cin >> k;
    while(k--){
        cin >> i >> b >> n;
        cout << i << " ";
        int sum_ = 0;
        while(n){
            sum_ += (n % b) * (n % b);
            n /= b;
        }
        cout <<sum_ << endl;
    }
}