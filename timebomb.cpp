#include <bits/stdc++.h>
using namespace std;

map<string, int> nums{
    {"**** ** ** ****", 0},
    {"  *  *  *  *  *", 1},
    {"***  *****  ***", 2},
    {"***  ****  ****", 3},
    {"* ** ****  *  *", 4},
    {"****  ***  ****", 5},
    {"****  **** ****", 6},
    {"***  *  *  *  *", 7},
    {"**** ***** ****", 8},
    {"**** ****  ****", 9}
};
string s;
string input_nums[8 + 3];

int main(){
    for(int i = 0; i < 5; i++){
        getline(cin, s);
        for(int j = 0; j < s.size(); j += 4){
            string tmp = "";
            for(int k = 0; k <= 2; k++)
                tmp += s[j + k];
            input_nums[j / 4] += tmp;
        }
    }
    cerr << input_nums[0] << endl;
    int digits = s.size() / 4 + 1;
    int ans = 0, factor = 1;
    for(int i = digits - 1; i >= 0; i--)
        ans += nums[input_nums[i]] * factor, factor *= 10;
    cout << ((ans % 6) ? "BOOM!!" : "BEER!!") << endl;
}