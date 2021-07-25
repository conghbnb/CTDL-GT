//
// Created by ASUS on 02/06/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    cin.ignore();
    while (t--) {
        getline(cin, s);
        stack<string> stk;
        string str = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                stk.push(str);
                str = "";
            }
            else str += s[i];
        }
        stk.push(str);
        while (!stk.empty()) {
            cout << stk.top() << " ";
            stk.pop();
        }
        cout << endl;
    }
    return 0;
}