#include <bits/stdc++.h>
using namespace std;

string s;
int score_a = 0, score_b = 0;

int main(){
    cin >> s;
    for(int i = 0; i < s.size(); i += 2){
        if(s[i] == 'A')
            score_a += (s[i + 1] - '0');
        else
            score_b += (s[i + 1] - '0');
    }
    if(score_a > score_b && score_a - score_b >= 2 && score_a >= 11)
        cout << 'A' << endl;
    else
        cout << 'B' << endl;
}