#include <bits/stdc++.h>
using namespace std;

int n;
bool adj[23][23];
vector<int> ans;

int main(){
    while(1){
        cin >> n;
        if(n == -1)
            break;
        ans.clear();
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> adj[i][j];
        for(int i = 0; i < n; i++){
            bool waste = 1;
            for(int j = 0; j < n; j++){
                for(int k = j + 1; k < n; k++)
                    if(adj[i][j] && adj[i][k] && adj[j][k]){
                        waste = 0;
                        break;
                    }
                if(!waste)
                    break;
            }
            if(waste)
                ans.push_back(i);
        }
        for(int x: ans)
            cout << x << " ";
        cout << endl;
    }
}