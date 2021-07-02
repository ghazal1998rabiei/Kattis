#include <bits/stdc++.h>
using namespace std;

int s;

int main(){
    cin >> s;
    cout << s << ":" << endl;
    for(int i = 2; i < s; i++)
        for(int j = i - 1; j <= i; j++){
            if(s % (i + j) == 0 || (s - i) % (i + j) == 0)
                cout << i << "," << j << endl;
        }
}