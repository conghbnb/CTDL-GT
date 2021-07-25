//
// Created by ASUS on 15/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

string Solve (int k, string s) {
    int i = 0, len = s.length(), tp = 0, max = 0;
    while (k > 0 && i < len) {
        max = i;
        for (int j = i + 1; j < len; j++) {
            if (s[j] >= s[max]) max = j;
        }
        if (s[max] > s[i]) {
            tp = s[i];
            s[i] = s[max];
            s[max] = tp;
            k--;
        }
        i++;
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t, k;
    string s;
    cin >> t;
    while (t--) {
        cin >> k >> s;
        cout << Solve(k, s) << endl;
    }
    return 0;
}