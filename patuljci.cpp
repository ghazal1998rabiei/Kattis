#include <bits/stdc++.h>
using namespace std;

int id[9 + 3];
// bool b[9 + 3];

// void track(int i, int sum_){
//     if(i == 9){
//         int cnt = 0;
//         if(sum_ == 100){
//             for(int k = 0; k < 9; k++)
//                 if(b[k])
//                     cnt++;
//             if(cnt == 7)
//                 for(int k = 0; k < 9; k++)
//                     if(b[k])
//                         cout << id[k] << endl;
//         }
//         return;
//     }
//     track(i + 1, sum_);
//     b[i] = 1;
//     track(i + 1, sum_ + id[i]);
//     b[i] = 0;
// }

int main(){
    for(int i = 0; i < 9; i++)
        cin >> id[i];
    // track(0, 0);

    // better solution
    for(int mask = 1; mask < (1 << 9); mask++){
        int cnt = 0, sum_ = 0;
        for(int i = 0; i < 9; i++)
            if(mask & (1 << i))
                sum_ += id[i], cnt++;
        if(cnt == 7 && sum_ == 100){
            for(int i = 0; i < 9; i++)
                if(mask & (1 << i))
                    cout << id[i] << endl;
            break;
        }
    }
}