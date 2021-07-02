#include <bits/stdc++.h>
using namespace std;

int t, k, first_, second_;
string pq;
vector<char> path;

int main(){
    cin >> t;
    while(t--){
        path.clear();
        cin >> k;
        cout << k << " ";
        cin >> pq;
        int indx = pq.find_first_of('/');
        first_ = stoi(pq.substr(0, indx)), second_ = stoi(pq.substr(indx + 1));
        while(first_ != 1 || second_ != 1){
            if(first_ > second_)
                path.push_back('R'), first_ -= second_;
            else
                path.push_back('L'), second_ -= first_;
        }
        reverse(path.begin(), path.end());
        int ans = 1;
        for(char c: path){
            ans *= 2;
            if(c == 'R')
                ans++;
        }
        cout << ans << endl;
    }
}