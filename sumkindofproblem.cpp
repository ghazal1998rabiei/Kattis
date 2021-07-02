#include <bits/stdc++.h>
using namespace std;

int t, k, n, even_sum, total_sum, odd_sum;

int main(){
    cin >> t;
    while(t--){
        cin >> k;
        cout << k << " ";
        cin >> n;
        even_sum = n * (2 * 2 + (n - 1) * 2) / 2;
        total_sum = n * (n + 1) / 2;
        odd_sum = n * (2 * 1 + (n - 1) * 2) / 2;
        cout << total_sum << " " << odd_sum << " " << even_sum << endl;
    }
}