//
// Created by ASUS on 27/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        stack<string> stk;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') stk.push(string(1, s[i]));
            else {
                string tmp1 = stk.top(); stk.pop();
                string tmp2 = stk.top(); stk.pop();
                string tmp = "(" + tmp2 + s[i] + tmp1 + ")";
                stk.push(tmp);
            }
        }
        cout << stk.top() << endl;
    }
    return 0;
}
