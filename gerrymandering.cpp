#include <bits/stdc++.h>
using namespace std;

int p, d, i, a, b, wa = 0, wb = 0, total_v = 0;
pair<int, int> districts[10003];

int main(){
    cin >> p >> d;
    while(p--){
        cin >> i >> a >> b;
        total_v += a + b;
        districts[i].first += a, districts[i].second += b;
    }
    for(int i = 1; i <= d; i++){
        char winner = ((districts[i].first > districts[i].second) ? 'A' : 'B');
        cout << winner << " ";
        int A = districts[i].first, B = districts[i].second, majority = (A + B) / 2 + 1;
        if(winner == 'A')
            cout << A - majority << " " << B << endl, wa += A - majority, wb += B;
        else
            cout << A << " " << B - majority << endl, wa += A, wb += B - majority;
    }
    cout << fixed << setprecision(7) << double(abs(wa - wb)) / total_v << endl;
}