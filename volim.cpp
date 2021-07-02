#include <bits/stdc++.h>
using namespace std;

int label, n, t, total = 0, ans = -1;
char result;

int main(){
    cin >> label >> n;
    label--;
    while(n--){
        cin >> t >> result;
        total += t;
        if(ans == -1 && total >= 3 * 60 + 30)
            ans = label;
        if(result == 'T')
            label = (label + 1) % 8;
    }
    cout << ans + 1 << endl;
}