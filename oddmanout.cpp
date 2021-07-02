#include <bits/stdc++.h>
using namespace std;

int t, n, x;
map<int, int> guests;

int main(){
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case #" << i << ": ";
        guests.clear();
        cin >> n;
        while(n--){
            cin >> x;
            guests[x]++;
        }
        for(auto p: guests)
            if(p.second == 1){
                cout << p.first << endl;
            }
    }
}