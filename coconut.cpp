#include <bits/stdc++.h>
using namespace std;

int s, n;
vector<pair<int, int>> hands;

int main(){
    cin >> s >> n;
    for(int i = 1; i <= n; i++)
        hands.push_back({i, 0});
    int i = 0;
    while(hands.size() > 1){
        i = (i + s - 1) % hands.size();
        if(hands[i].second == 0){
            int indx = hands[i].first;
            hands[i].second = 1;
            hands.insert(hands.begin() + i + 1, {indx, 1});
        }
        else if(hands[i].second == 1)
            hands[i].second = 2, i++;
        else
            hands.erase(hands.begin() + i);
    }
    cout << hands[0].first << endl;
}