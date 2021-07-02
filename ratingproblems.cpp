#include <bits/stdc++.h>
using namespace std;

int n, k, r;
double sum;

int main(){
    cin >> n >> k;
    for(int i = 0; i < k; i++)
        cin >> r, sum += r;
    cout << fixed << setprecision(5) << (sum + (-3) * (n - k)) / n << " " << (sum + 3 * (n - k)) / n << endl;
}