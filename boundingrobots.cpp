#include <bits/stdc++.h>
using namespace std;

int w, l, x, n, actual_x, actual_y, think_x, think_y;
char c;

int main(){
    while(1){
        cin >> w >> l;
        if(w + l == 0)
            break;
        actual_x = actual_y = think_x = think_y = 0;
        cin >> n;
        while(n--){
            cin >> c >> x;
            if(c == 'u')
                actual_y = min(actual_y + x, l - 1), think_y += x;
            else if(c == 'd')
                actual_y = max(actual_y - x, 0), think_y -= x;
            else if(c == 'r')
                actual_x = min(actual_x + x, w - 1), think_x += x;
            else
                actual_x = max(actual_x - x, 0), think_x -= x;
        }
        cout << "Robot thinks " << think_x << " " << think_y << endl;
        cout << "Actually at " << actual_x << " " << actual_y << endl << endl;
    }
}