#include <bits/stdc++.h>
using namespace std;

string notes[12]{"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};
int major[7]{2, 2, 1, 2, 2, 2, 1};
int n;
set<string> song;
string s;
set<string> majors[12];
vector<string> ans;

int main(){
    for(int i = 0; i < 12; i++){
        int prev = i;
        for(int j = 0; j < 7; j++){
            int indx = (prev + major[j]) % 12;
            majors[i].insert(notes[indx]);
            prev = indx;
        }
    }
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> s, song.insert(s);
    for(int i = 0; i < 12; i++){
        bool ok = 1;
        for(string x: song)
            if(majors[i].find(x) == majors[i].end()){
                ok = 0;
                break;
            }
        if(ok)
            ans.push_back(notes[i]);
    }
    if(ans.size() == 0)
        cout << "none";
    else
        for(string x: ans)
            cout << x << " ";
    cout << endl;
}