//
// Created by ASUS on 29/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
    queue<string> q;
    stack<string> stk;
    q.push("6");
    q.push("8");
    while (1) {
        string res = q.front(); q.pop();
        if (res.length() > n) break;
        stk.push(res);
        q.push(res + "6");
        q.push(res + "8");
    }
    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        solve(n);
        cout << endl;
    }
    return 0;
}