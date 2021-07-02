#include <bits/stdc++.h>
using namespace std;

int t;
string s, name;
vector<string> parts;
int courses;

vector<string> split(string s, char c){
    vector<string> v;
    stringstream ss(s);
    while(ss.good()){
        string tmp;
        getline(ss, tmp, c);
        v.push_back(tmp);
    }
    return v;
}

int main(){
    cin >> t;
    cin.ignore();
    while(t--){
        parts.clear();
        getline(cin, s);
        parts = split(s, ' ');
        int post_secondary_year = stoi(split(parts[1], '/')[0]);
        int birth_year = stoi(split(parts[2], '/')[0]);
        name = parts[0], courses = stoi(parts[3]);
        cout << name << " ";
        if(post_secondary_year >= 2010)
            cout << "eligible" << endl;
        else if(birth_year >= 1991)
            cout << "eligible" << endl;
        else if(courses > 40)
            cout << "ineligible" << endl;
        else
            cout << "coach petitions" << endl;
    }
}