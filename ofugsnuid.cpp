#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<int> a;

int main(){
    cin >> n;
    while(n--){
        cin >> x;
        a.push_back(x);
    }
    reverse(a.begin(), a.end());
    for(int x: a)
        cout << x << endl;
}