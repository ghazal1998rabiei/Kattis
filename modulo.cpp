#include <bits/stdc++.h>
using namespace std;

set<int> s;
int x;

int main(){
    for(int i = 0; i < 10; i++){
        cin >> x;
        s.insert(x % 42);
    }
    cout << s.size() << endl;
}