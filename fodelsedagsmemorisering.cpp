#include <bits/stdc++.h>
using namespace std;

map<string, pair<int, string>> friends;
int n, like;
string name, date;

int main(){
    cin >> n;
    while(n--){
        cin >> name >> like >> date;
        if(friends.find(date) != friends.end()){
            if(like > friends[date].first)
                friends[date] = {like, name};
        }
        else
            friends[date] = {like, name};
    }
    cout << friends.size() << endl;
    vector<string> ans;
    for(auto p: friends)
        ans.push_back(p.second.second);
    sort(ans.begin(), ans.end());
    for(string s: ans)
        cout << s << endl;
}