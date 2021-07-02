#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 3;
int n, q, coordinate[maxn], t, p1, p2;

int main(){
    cin >> n >> q;
    for(int i = 1; i <= n; i++)
        cin >> coordinate[i];
    while(q--){
        cin >> t >> p1 >> p2;
        if(t == 1)
            coordinate[p1] = p2;
        else
            cout << abs(coordinate[p1] - coordinate[p2]) << endl;
    }
}