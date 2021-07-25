//
// Created by ASUS on 27/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int Tinh(int a, int b, char c) {
    if (c == '+') return b + a ;
    if (c == '-') return b - a;
    if (c == '*') return a * b;
    if (c == '/') return b / a;
}

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        stack<int> stk;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= '0' && s[i] <= '9') stk.push(s[i] - '0');
            else {
                int tmp1 = stk.top(); stk.pop();
                int tmp2 = stk.top(); stk.pop();
                cout << tmp1 << " " << tmp2 << " ";
                stk.push(Tinh(tmp1, tmp2, s[i]));
            }
        }
        cout << stk.top() << endl;
    }
    return 0;
}