#include <bits/stdc++.h>
using namespace std;

int main(){
    string x, y;
    cin >> x >> y;
    reverse(x.begin(), x.end()), reverse(y.begin(), y.end());
    int x2 = stoi(x), y2 = stoi(y);
    cout << max(x2, y2) << endl;
}