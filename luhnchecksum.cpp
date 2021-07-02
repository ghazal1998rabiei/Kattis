#include <bits/stdc++.h>
using namespace std;

int t;
string number;

int main(){
    cin >> t;
    while(t--){
        cin >> number;
        int sum_ = 0;
        int size_ = number.size();
        for(int i = size_ - 1; i >= 0; i -= 2)
            sum_ += (number[i] - '0');
        for(int i = size_ - 2; i >= 0; i -= 2){
            int digit = 2 * (number[i] - '0');
            if(digit >= 10)
                digit = digit % 10 + digit / 10;
            sum_ += digit;
        }
        if(sum_ % 10 == 0)
            cout << "PASS" << endl;
        else
            cout << "FAIL" << endl;
    }
}