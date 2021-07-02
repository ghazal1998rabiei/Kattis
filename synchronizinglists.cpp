#include <bits/stdc++.h>
using namespace std;

const int maxn = 5003;
int n, b[maxn], ans[maxn];
pair<int, int> a[maxn];

int main(){
    while(1){
        cin >> n;
        if(!n)
            break;
        for(int i = 0; i < n; i++)
            cin >> a[i].first, a[i].second = i;
        sort(a, a + n);
        for(int i = 0; i < n; i++)
            cin >> b[i];
        sort(b, b + n);
        for(int i = 0; i < n; i++)
            ans[a[i].second] = b[i];
        for(int i = 0; i < n; i++)
            cout << ans[i] << endl;
        cout << endl;
    }
}