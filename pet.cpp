#include <bits/stdc++.h>
using namespace std;

int s1, s2, s3, s4;

int main(){
    int ans = INT_MIN, ans_i;
    for(int i = 0; i < 5; i++){
        cin >> s1 >> s2 >> s3 >> s4;
        if(s1 + s2 + s3 + s4 > ans)
            ans = s1 + s2 + s3 + s4, ans_i = i + 1;
    }
    cout << ans_i << " " << ans << endl;
}