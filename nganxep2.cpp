//
// Created by ASUS on 26/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string s;
    cin >> t;
    stack<int> stk;
    while (t--) {
        cin >> s;
        if (s == "PUSH") {
            cin >> n;
            stk.push(n);
        }
        else if (s == "POP") {
            if (!stk.empty()) stk.pop();
        }
        else {
            if (!stk.empty()) cout << stk.top();
            else cout << "NONE";
            cout << endl;
        }
    }
    return 0;
}