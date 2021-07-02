#include <bits/stdc++.h>
using namespace std;

int t, n;
vector<int> red, blue;
string s;

int main(){
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case #" << i << ": ";
        red.clear(), blue.clear();
        cin >> n;
        while(n--){
            cin >> s;
            int size_ = s.size();
            if(s[size_ - 1] == 'R')
                red.push_back(stoi(s.substr(0, size_ - 1)));
            else
                blue.push_back(stoi(s.substr(0, size_ - 1)));
        }
        sort(red.begin(), red.end(), greater<int>());
        sort(blue.begin(), blue.end(), greater<int>());
        int min_ = min(red.size(), blue.size());
        int sum_ = 0;
        for(int i = 0; i < min_; i++)
            sum_ += red[i] + blue[i];
        sum_ -= 2* min_;
        cout << sum_ << endl;
    }
}