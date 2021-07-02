#include <bits/stdc++.h>
using namespace std;

int a, b, c;
char op1, op2;

int main(){
    cin >> a >> b >> c;
    if(a + b == c)
        op1 = '+', op2 = '=';
    else if(a - b == c)
        op1 = '-', op2 = '=';
    else if(a * b == c)
        op1 = '*', op2 = '=';
    else if(a / b == c)
        op1 = '/', op2 = '=';
    else if(b + c == a)
        op1 = '=', op2 = '+';
    else if(b - c == a)
        op1 = '=', op2 = '-';
    else if(b * c == a)
        op1 = '=', op2 = '*';
    else
        op1 = '=', op2 = '/';
    cout << a << op1 << b << op2 << c << endl;
}