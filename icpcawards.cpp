#include <bits/stdc++.h>
using namespace std;

int n;
set<string> universities;
string team, university;

int main(){
    cin >> n;
    int ans = 0;
    while(n--){
        cin >> university >> team;
        if(ans == 12)
            continue;
        if(universities.find(university) == universities.end())
            ans++, cout << university << " " << team << endl, universities.insert(university);
    }
}