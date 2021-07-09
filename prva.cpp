#include <bits/stdc++.h>
using namespace std;

int r, c;
char g[23][23];
set<string> words;

int main(){
    cin >> r >> c;
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> g[i][j];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++){
            if(g[i][j] == '#')
                continue;
            if(j == 0 || g[i][j - 1] == '#'){
                string word = "";
                for(int k = 0; k < c - j; k++){
                    if(g[i][j + k] == '#')
                        break;
                    word += g[i][j + k];
                }
                if(word.size() > 1)
                    words.insert(word);
            }
            if(i == 0 ||g[i - 1][j] == '#'){
                string word = "";
                for(int k = 0; k < r - i; k++){
                    if(g[i + k][j] == '#')
                        break;
                    word += g[i + k][j];
                }
                if(word.size() > 1)
                    words.insert(word);
            }
        }
        cout << *words.begin() << endl;
}