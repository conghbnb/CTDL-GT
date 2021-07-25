//
// Created by ASUS on 02/06/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        stack<int> stk;
        for (int i = 0; i <= s.length(); i++) {
            stk.push(i+1);
            if (s[i] == 'I' || i == s.length()) {
                while (!stk.empty()) {
                    cout << stk.top();
                    stk.pop();
                }
            }
        }
        cout << endl;
    }
    return 0;
}