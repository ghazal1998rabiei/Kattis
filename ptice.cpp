#include <bits/stdc++.h>
using namespace std;

int n;
string correct;
char adrian[3]{'A', 'B', 'C'}, bruno[4]{'B', 'A', 'B', 'C'}, goran[6]{'C', 'C', 'A', 'A', 'B', 'B'};
int ans_adrian = 0, ans_bruno = 0, ans_goran = 0;

int main(){
    cin >> n >> correct;
    for(int i = 0; i < n; i++){
        if(correct[i] == adrian[i % 3])
            ans_adrian++;
        if(correct[i] == bruno[i % 4])
            ans_bruno++;
        if(correct[i] == goran[i % 6])
            ans_goran++;
    }
    int best = max(ans_adrian, max(ans_bruno, ans_goran));
    cout << best << endl;
    if(ans_adrian == best)
        cout << "Adrian" << endl;
    if(ans_bruno == best)
        cout << "Bruno" << endl;
    if(ans_goran == best)
        cout << "Goran" << endl;
}