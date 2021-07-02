#include <bits/stdc++.h>
using namespace std;

int n, a[103], x;

int main(){
    cin >> n;
    a[0] = 1;
    for(int i = 2; i <= n; i++){
        cin >> x;
        a[x + 1] = i;
    }
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}