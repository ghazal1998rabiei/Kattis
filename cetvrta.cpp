#include <bits/stdc++.h>
using namespace std;

int x, y;
map<int, bool> mpx, mpy;

int main(){
    for(int i = 0; i < 3; i++){
        cin >> x >> y;
        if(mpx.find(x) != mpx.end())
            mpx[x] = 1;
        else
            mpx[x] = 0;
        if(mpy.find(y) != mpy.end())
            mpy[y] = 1;
        else
            mpy[y] = 0;
    }
    for(auto p: mpx)
        if(!p.second)
            cout << p.first << " ";
    for(auto p: mpy)
        if(!p.second)
            cout << p.first << endl;
}