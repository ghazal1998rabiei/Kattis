#include <bits/stdc++.h>
using namespace std;

string cipher_text, key, text = "";

int main(){
    cin >> cipher_text >> key;
    int step = key.size();
    int size_ = cipher_text.size();
    for(int i = 0; i < size_; i += step){
        string tmp = "";
        for(int k = 0; k < step; k++){
            if(i + k >= size_)
                break;
            tmp += (cipher_text[i + k] - key[i + k] + 26) % 26 + 'A';
        }
        text += tmp;
        key += tmp;
    }
    cout << text << endl;
}