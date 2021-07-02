#include <bits/stdc++.h>
using namespace std;

int a[5 + 3];

int main(){
    for(int i = 0; i < 5; i++)
        cin >> a[i];
    for(int j = 4; j >= 0; j--)
        for(int i = 0; i < j; i++)
            if(a[i] > a[i + 1]){
                swap(a[i], a[i + 1]);
                for(int k = 0; k < 5; k++)
                    cout << a[k] << " ";
                cout << endl;
            }
}