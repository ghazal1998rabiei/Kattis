#include <bits/stdc++.h>
using namespace std;

int d, m;
int days[12]{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string week[7]{"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};

int main(){
    cin >> d >> m;
    int real_day = d;
    for(int i = 0; i < m - 1; i++)
        real_day += days[i];
    cout << week[(real_day - 1) % 7] << endl;
}