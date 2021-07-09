#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum_ = 0;
    for(int i = 1; i < n - 2; i++)
        for(int j = 1; j < n - 2; j++){
            if(i + j != n - 2)
                continue;
            sum_ += (i * j);
        }
    cout << sum_ * n / 4 << endl;
}