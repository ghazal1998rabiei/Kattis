#include <bits/stdc++.h>
using namespace std;

int n;
pair<int, double> curve[10003];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> curve[i].first >> curve[i].second;
    double sum_ = 0;
    for(int i = 0; i < n - 1; i++)
        sum_ += (curve[i].second + curve[i + 1].second) / 2 * (curve[i + 1].first - curve[i].first);
    cout << fixed << setprecision(6) << sum_ / 1000 << endl;
}