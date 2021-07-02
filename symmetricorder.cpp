#include <bits/stdc++.h>
using namespace std;

int n, cnt = 1;
string ans[15 + 3];

int main(){
    while(1){
        cin >> n;
        if(n == 0)
            break;
        cout << "SET " << cnt++ << endl;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0)
                cin >> ans[i / 2];
            else
                cin >> ans[n - (i / 2 + 1)];
        }
        for(int i = 0; i < n; i++)
            cout << ans[i] << endl;
    }
}