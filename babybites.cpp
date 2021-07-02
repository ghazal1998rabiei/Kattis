#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<int, int>> v;
string s;

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> s;
        if(s == "mumble")
            continue;
        v.push_back({stoi(s), i});
    }
    bool wr = 0;
    int size_ = v.size();
    for(auto p: v)
        if(p.first != p.second){
            wr = 1;
            break;
        }
    if(wr)
        cout << "something is fishy" << endl;
    else
        cout << "makes sense" << endl;
}