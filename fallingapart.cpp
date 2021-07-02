#include <bits/stdc++.h>
using namespace std;

int n, a[15 + 3];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, greater<int>());
    int alice = 0, bob = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0)
            alice += a[i];
        else
            bob += a[i];
    }
    cout << alice << " " << bob << endl;
}