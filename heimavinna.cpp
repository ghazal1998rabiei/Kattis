#include <bits/stdc++.h>
using namespace std;

vector<string> chunks;
string s, substr;

int main(){
    cin >> s;
    stringstream ss(s);
    while(ss.good()){
        getline(ss, substr, ';');
        chunks.push_back(substr);
    }
    int ans = 0;
    for(string chunk: chunks){
        int findx = chunk.find_first_of('-');
        if(findx != -1){
            int start = stoi(chunk.substr(0, findx)), last = stoi(chunk.substr(findx + 1));
            ans += last - start + 1;
        }
        else
            ans++;
    }
    cout << ans << endl;
}