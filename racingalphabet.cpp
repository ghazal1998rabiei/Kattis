#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265359

int n;
string s;
map<char, int> chars;

int main(){
    for(char c = 'A'; c <= 'Z'; c++)
        chars[c] = c - 'A';
    chars[' '] = 26;
    chars['\''] = 27;
    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin, s);
        int size_ = s.size();
        double sum_ = 0;
        for(int i = 0; i < size_ - 1; i++){
            int max_ = max(chars[s[i]], chars[s[i + 1]]), min_ = min(chars[s[i]], chars[s[i + 1]]);
            sum_ += min(max_ - min_, min_ + 28 - max_);
        }
        double one_step = PI * 60 / 28;
        cout << fixed << setprecision(7) << sum_ * one_step / 15 + size_ << endl;
    }
}