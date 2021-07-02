#include <bits/stdc++.h>
using namespace std;

int n;
char b, number, suit;
map<char, pair<int, int>> mp{{'A', {11, 11}},
                             {'K', {4, 4}},
                             {'Q', {3, 3}},
                             {'J', {20, 2}},
                             {'T', {10, 10}},
                             {'9', {14, 0}},
                             {'8', {0, 0}},
                             {7, {0, 0}}}; 

int main(){
    cin >> n >> b;
    n *= 4;
    int sum_ = 0;
    while(n--){
        cin >> number >> suit;
        if(suit == b)
            sum_ += mp[number].first;
        else
            sum_ += mp[number].second;
    }
    cout << sum_ << endl;
}