//
// Created by ASUS on 10/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        int n = s.length();
        long long f[n+1], res = f[0] = s[0] - '0';
        for (int i = 1; i < n; i++) {
            int k = s[i] - '0';
            f[i] = f[i-1] * 10 + k * (i+1);
            res += f[i];
        }
        cout << res << endl;
    }
    return 0;
}