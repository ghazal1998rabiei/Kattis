#include <bits/stdc++.h>
using namespace std;

int n, s, t;
set<int> days;

int main(){
    cin >> n;
    while(n--){
        cin >> s >> t;
        for(int d = s; d <= t; d++)
            days.insert(d);
    }
    cout << days.size() << endl;
}