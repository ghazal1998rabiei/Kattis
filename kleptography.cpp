#include <bits/stdc++.h>
using namespace std;

int n, m;
string last_of_a, b;
char a[103];

int main(){
    cin >> n >> m >> last_of_a >> b;
    for(int i = m - n; i < m; i++)
        a[i] = last_of_a[i - (m - n)];
    for(int i = m - n - 1; i >= 0; i--)
        a[i] = (b[n + i] - a[n + i] + 26) % 26 + 'a';
    for(int i = 0; i < m; i++)
        cout << a[i];
    cout << endl;
}