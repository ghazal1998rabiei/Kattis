#include <bits/stdc++.h>
using namespace std;

int possible_sums[43], max_sum = INT_MIN;

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            possible_sums[i + j]++, max_sum = max(max_sum, possible_sums[i + j]);
    for(int i = 2; i <= n + m; i++)
        if(possible_sums[i] == max_sum)
            cout << i << endl;
}