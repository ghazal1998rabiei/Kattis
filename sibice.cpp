#include <bits/stdc++.h>
using namespace std;

int n, w, h, l, max_;

int main(){
    cin >> n >> w >> h;
    max_ = sqrt(w * w + h * h);
    while(n--){
        cin >> l;
        if(l <= max_)
            cout << "DA" << endl;
        else
            cout << "NE" << endl;
    }
}