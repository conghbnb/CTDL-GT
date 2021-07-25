//
// Created by ASUS on 27/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s;
    while (t--) {
        cin >> s;
        stack<string> stk;
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] >= 'A' && s[i] <= 'Z') stk.push(string(1, s[i]));
            else {
                string tmp1 = stk.top(); stk.pop();
                string tmp2 = stk.top(); stk.pop();
                string tmp = "(" + tmp1 + s[i] + tmp2 + ")";
                stk.push(tmp);
            }
        }
        cout << stk.top() << endl;
    }
    return 0;
}