#include <bits/stdc++.h>
using namespace std;

int s, t, n, d[23], b[23], c[23];

int main(){
    cin >> s >> t >> n;
    for(int i = 0; i < n + 1; i++)
        cin >> d[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    for(int i = 0; i < n; i++)
        cin >> c[i];
    int now = 0;
    for(int i = 0; i < n; i++){
        now += d[i];
        int next_bus = c[i];
        while(next_bus < now)
            next_bus += c[i];
        int delay = next_bus - now;
        now += delay;
        now += b[i];
    }
    now += d[n];
    if(now <= t)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}