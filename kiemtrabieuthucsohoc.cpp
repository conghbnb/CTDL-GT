//
// Created by ASUS on 26/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    cin.ignore();
    while (t--) {
        int ok;
        stack<char> stk;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ')') {
                ok = 1;
                char top = stk.top();
                stk.pop();
                while (top != '(') {
                   if (top == '+' || top == '-' || top == '/' || top == '*') {
                       ok = 0;
                   }
                   top = stk.top(); stk.pop();
                }
                if (ok) break;
            }
            else stk.push(s[i]);
        }
        if (ok) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
    return 0;
}