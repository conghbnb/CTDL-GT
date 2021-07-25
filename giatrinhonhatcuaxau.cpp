//
// Created by ASUS on 03/05/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, k;
    string s;
    cin >> t;
    while (t--) {
        cin >> k >> s;
        int mark[26] = {0};
        for (int i = 0; i < s.length(); i++) {
            mark[s[i] - 'A']++;
        }
        priority_queue<long long, vector<long long>> q;
        for (int i = 0; i < 26; i++) {
            if (mark[i] != 0) q.push(mark[i]);
        }
        while (!q.empty() && k > 0) {
            long long x = q.top(); q.pop();
            x--; k--;
            q.push(x);
        }
        long long res = 0;
        while (!q.empty()) {
            res += q.top() * q.top();
            q.pop();
        }
        cout << res << endl;
    }
    return 0;
}