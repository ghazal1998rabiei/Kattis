#include <bits/stdc++.h>
using namespace std;

int n, prev_digit;
string s;
map<char, pair<int, int>> chars{{'a', {2, 1}}, {'b', {2, 2}}, {'c', {2, 3}}, {'d', {3, 1}}, {'e', {3, 2}}, {'f', {3, 3}}, {'g', {4, 1}}, {'h', {4, 2}}, {'i', {4, 3}}, {'j', {5, 1}}, {'k', {5, 2}}, {'l', {5, 3}}, {'m', {6, 1}}, {'n', {6, 2}}, {'o', {6, 3}}, {'p', {7, 1}}, {'q', {7, 2}}, {'r', {7, 3}}, {'s', {7, 4}}, {'t', {8, 1}}, {'u', {8, 2}}, {'v', {8, 3}}, {'w', {9, 1}}, {'x', {9, 2}}, {'y', {9, 3}}, {'z', {9, 4}}, {' ', {0, 1}}};

int main(){
    cin >> n;
    cin.ignore();
    for(int i = 1; i <= n; i++){
        prev_digit = 100;
        cout << "Case #" << i << ": ";
        getline(cin, s);
        int size_ = s.size();
        for(char c: s){
            if(chars[c].first == prev_digit)
                cout << ' ';
            for(int j = 0; j < chars[c].second; j++)
                cout << chars[c].first;
            prev_digit = chars[c].first;
        }
        cout << endl;
    }
}