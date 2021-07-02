#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, m;
    cin >> h >> m;
    if(m >= 45)
        cout << h << " " << m - 45 << endl;
    else
        cout << (h - 1 + 24) % 24 << " " << 60 - (45 - m) << endl;
}
