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
        cin >> s;
        int count1 = 0,  count2 = 0;
        stack<char> stk;
        for (int i = 0; i < s.length(); i++) {
            if (!stk.empty() && s[i] == ')' && stk.top() == '(') stk.pop();
            else stk.push(s[i]);
        }
        while (!stk.empty()) {
            if (stk.top() == '(') count1++;
            else count2++;
            stk.pop();
        }
        cout << count1/2 + count2 / 2 + count1 % 2 + count2 % 2 << endl;
    }
    return 0;
}