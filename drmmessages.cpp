#include <bits/stdc++.h>
using namespace std;

const int maxn = 15e3 + 3;

string s;
char half1[maxn], half2[maxn];

int main(){
    string s;
    cin >> s;
    int size_ = s.size();
    for(int i = 0; i < size_ / 2; i++)
        half1[i] = s[i], half2[i] = s[size_ / 2 + i];
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < size_ / 2; i++)
        sum1 += (half1[i] - 'A'), sum2 += (half2[i] - 'A');
    for(int i = 0; i < size_ / 2; i++){
        half1[i] = (half1[i] - 'A' + sum1) % 26 + 'A';
        half2[i] = (half2[i] - 'A' + sum2) % 26 + 'A';
    }
    for(int i = 0; i < size_ / 2; i++)
        half1[i] = (half1[i] - 'A' + (half2[i] - 'A')) % 26 + 'A';
    for(int i = 0; i < size_ / 2; i++)
        cout << half1[i];
    cout << endl;
}