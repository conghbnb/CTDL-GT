//
// Created by ASUS on 03/05/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s;
    while (t--) {
        cin >> s;
        stack<char> stk;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') stk.push(i);
            else if (s[i] == ')') {
                if (!stk.empty()) {
                    int top = stk.top(); stk.pop();
                    if (top == 0) continue;
                    else if (s[top - 1] == '+') continue;
                    else if (s[top - 1] == '-') {
                        for (int j = top; j <= i; j++) {
                            if (s[j] == '+') s[j] = '-';
                            else if (s[j] == '-') s[j] = '+';
                        }
                    }
                }
            }
        }
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '(' && s[i] != ')') cout << s[i];
        }
        cout << endl;
    }
    return 0;
}