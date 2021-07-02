#include <bits/stdc++.h>
using namespace std;

int a1, b1, a2, b2;
double gunnar = 0, emma = 0;

int main(){
    cin >> a1 >> b1 >> a2 >> b2;
    for(int i = a1; i <= b1; i++)
        for(int j = a2; j <= b2; j++)
            gunnar += i + j;
    gunnar /= ((b1 - a1 + 1) * (b2 - a2 + 1));
    cin >> a1 >> b1 >> a2 >> b2;
    for(int i = a1; i <= b1; i++)
        for(int j = a2; j <= b2; j++)
            emma += i + j;
    emma /= ((b1 - a1 + 1) * (b2 - a2 + 1));
    if(emma > gunnar)
        cout << "Emma" << endl;
    else if(gunnar > emma)
        cout << "Gunnar" << endl;
    else
        cout << "Tie" << endl;
}