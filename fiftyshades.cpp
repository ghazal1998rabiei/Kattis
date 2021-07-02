#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main(){
    cin >> n;
    int ans = 0;
    while(n--){
        cin >> s;
        for_each(s.begin(), s.end(), [](char & c){c = tolower(c);});
        int size_ = s.size();
        bool found = 0;
        for(int i = 0; i < size_ - 3; i++){
            string substring = s.substr(i, 4);
            if(substring == "rose" || substring == "pink"){
                found = 1;
                break;
            }
        }
        ans += found;
    }
    if(ans)
        cout << ans << endl;
    else
        cout << "I must watch Star Wars with my daughter" << endl;
}