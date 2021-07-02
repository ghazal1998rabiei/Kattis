#include <bits/stdc++.h>
using namespace std;

int t, k, o[13], sum_;

int main(){
    cin >> t;
    while(t--){
        sum_ = 0;
        cin >> k;
        for(int i = 0; i < k; i++)
            cin >> o[i];
        sort(o, o + k);
        sum_ = o[k - 1];
        for(int i = 0; i < k - 1; i++)
            sum_ += o[i] - 1;
        cout << sum_ << endl;
    }
}