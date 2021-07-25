//
// Created by ASUS on 06/05/2021.
//

#include<bits/stdc++.h>
using namespace std;

void solve (string s, int k, string &max, int ctr) {
    if (k == 0) return;
    int n = s.length();
    char maxc = s[ctr];
    for (int i = ctr + 1; i < n; i++) {
        if (s[i] > maxc) maxc = s[i];
    }
    if (maxc != s[ctr]) k--;
    for (int i = ctr; i < n; i++) {
        if (s[i] == maxc) {
            swap(s[i], s[ctr]);
            if (s.compare(max) > 0) max = s;
            solve(s, k, max, ctr+1);
            swap(s[ctr], s[i]);
        }
    }
}

int main() {
    int t, k;
    string s;
    cin >> t;
    while (t--) {
        cin >> k >> s;
        string max = s;
        solve(s, k, max, 0);
        cout << max << endl;
    }
    return 0;
}