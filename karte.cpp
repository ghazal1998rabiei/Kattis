#include <bits/stdc++.h>
using namespace std;

string s;
set<string> cards;
char suits[4]{'P', 'K', 'H', 'T'};

int main(){
    cin >> s;
    int size_ = s.size();
    for(int i = 0; i < size_ - 2; i += 3){
        string card = s.substr(i, 3);
        if(cards.find(card) != cards.end()){
            cout << "GRESKA" << endl;
            return 0;
        }
        cards.insert(card);
    }
    for(char c: suits){
        int cnt = 0;
        for(string card: cards)
            if(card[0] == c)
                cnt++;
        cout << 13 - cnt << " ";
    }
    cout << endl;
}