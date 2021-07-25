//
// Created by ASUS on 23/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stack<int> stk;
        int res = 0;
        stk.push(-1);
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') stk.push(i);
            else {
                stk.pop();
                if (!stk.empty()) res = max(res, i - stk.top());
                else stk.push(i);
            }
        }
        cout << res << endl;
    }
    return 0;
}