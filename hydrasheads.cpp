#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, t;
    while(1){
        cin >> h >> t;
        if(h + t == 0)
            break;
        bool h_even = (h % 2 == 0), t_even = (t % 2 == 0), t_4 = (t % 4 == 0);
        int ans = 0;
        if(!h_even){
            if(!t_even){
                if(t % 4 == 1)
                    ans++, t++;
                else
                    ans += 3, t += 3;
            }
            else if(t_even && t_4)
                t += 2, ans += 2;
        }
        else{
            if(!t_even){
                if(t % 4 == 1)
                    ans += 3, t += 3;
                else
                    ans++, t++;
            }
            else if(t_even && !t_4)
                t += 2, ans += 2;
        }
        cout << t / 2 + (h + t / 2) / 2 + ans << endl;
    }
}