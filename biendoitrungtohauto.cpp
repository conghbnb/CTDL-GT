//
// Created by ASUS on 02/05/2021.
//

#include<bits/stdc++.h>
using namespace std;

int getPriority(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/' || op == '%') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

int main() {
    int t;
    cin >> t;
    string s;
    while (t--) {
        cin >> s;
        stack<char> stk;
        for (int i = 0; i < s.length(); i++) {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) cout << s[i];
            else if (s[i] == '(') stk.push(s[i]);
            else if (s[i] == ')' && !stk.empty()) {
                char x = stk.top(); stk.pop();
                while (x != '(' && !stk.empty()) {
                    cout << x;
                    x = stk.top();
                    stk.pop();
                }
            }
            else {
                while (!stk.empty() && getPriority(stk.top()) >= getPriority(s[i])) {
                    cout << stk.top();
                    stk.pop();
                }
                stk.push(s[i]);
            }
        }
        while (!stk.empty()) {
            if (stk.top() != '(') cout << stk.top();
            stk.pop();
        }
        cout << endl;
    }
    return 0;
}