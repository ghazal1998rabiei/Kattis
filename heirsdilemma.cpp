#include <bits/stdc++.h>
using namespace std;

int l, h;
set<int> digits;

bool check(int x){
    digits.clear();
    int tmp = x;
    while(tmp){
        if(tmp % 10 == 0)
            return 0;
        if(digits.find(tmp % 10) != digits.end())
            return 0;
        digits.insert(tmp % 10);
        tmp /= 10;
    }
    for(int d: digits)
        if(x % d != 0)
            return 0;
    return 1;
}

int main(){
    cin >> l >> h;
    int cnt = 0;
    for(int i = l; i <= h; i++)
        if(check(i))
            cnt++;
    cout << cnt << endl;
}