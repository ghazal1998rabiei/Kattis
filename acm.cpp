#include <bits/stdc++.h>
using namespace std;

int minute;
char problem;
string result;
set<char> solved;
map<char, vector<pair<int, string>>> probs;

int main(){
    while(1){
        cin >> minute;
        if(minute == -1)
            break;
        cin >> problem >> result;
        probs[problem].push_back({minute, result});
        if(result == "right")
            solved.insert(problem);
    }
    int ans = 0, time = 0;
    for(auto p: probs){
        char id = p.first;
        if(solved.find(id) == solved.end())
            continue;
        ans++;
        int wr = 0;
        for(auto x: p.second){
            if(x.second == "right"){
                time += x.first;
                break;
            }   
            wr++;
        }
        time += wr * 20;
    }
    cout << ans << " " << time << endl;
}