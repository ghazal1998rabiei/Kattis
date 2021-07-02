#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    string binary = "";
    while(x){
        binary += to_string(x % 2);
        x /= 2;
    }
    reverse(binary.begin(), binary.end());
    int ans = 0, fact = 1;
    for(int i = 0; i < binary.size(); i++)
        ans += fact * (binary[i] - '0'), fact *= 2;
    cout << ans << endl;
}