#include <bits/stdc++.h>
using namespace std;

int n, score[53];

double gscore(int skip=-1){
    double gscore = 0;
    double factor = 1;
    for(int i = 0; i < n; i++){
        if(i == skip)
            continue;
        gscore += score[i] * factor;
        factor *= (4.0 / 5);
    }
    return gscore / 5;
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> score[i];
    cout << fixed << setprecision(7);
    cout << gscore() << endl;
    double avg = 0;
    for(int i = 0; i < n; i++)
        avg += gscore(i);
    cout << avg / n << endl;
}