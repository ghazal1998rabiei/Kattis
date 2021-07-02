#include <bits/stdc++.h>
using namespace std;

int n, l;

int main(){
    cin >> n;
    int sum_ = -n + 1;
    while(n--){
        cin >> l;
        sum_ += l;
    }
    cout << sum_ << endl;
}