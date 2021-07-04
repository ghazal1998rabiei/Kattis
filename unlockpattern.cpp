#include <bits/stdc++.h>
using namespace std;

int g[3][3];
pair<int, int> nums[13];

double dis(pair<int, int> p1, pair<int, int> p2){
    double dx = p1.first - p2.first;
    double dy = p1.second - p2.second;
    return sqrt(dx * dx + dy * dy);
}

int main(){
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> g[i][j], nums[g[i][j]] = {i, j};
    double ans = 0;
    for(int i = 1; i < 9; i++)
        ans += dis(nums[i], nums[i + 1]);
    cout << fixed << setprecision(7) << ans << endl;
}