//
// Created by ASUS on 29/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

string solve(int n) {
    queue<string> q;
    q.push("1");
    while (1) {
        string res = q.front(); q.pop();
        long long tmp = 0;
        for (int i = 0; i < res.length(); i++) {
            tmp = 10*tmp + (res[i] - '0');
        }
        if (tmp % n == 0) return res;
        q.push(res + "0");
        q.push(res + "1");
    }
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}