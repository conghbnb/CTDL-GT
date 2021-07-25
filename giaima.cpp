//
// Created by ASUS on 06/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        if (s[0] == '0') cout << 0 << endl;
        else {
            int f[1000] = {0};
            f[0] = f[1] = 1;
            int n = s.length();
            for (int i = 2; i <= n; i++) {
                if (s[i-1] > '0') f[i] = f[i-1];
                if (s[i-2] == '1' || (s[i-2] == '2' && s[i-1] < '7'))
                    f[i] += f[i-2];
            }
            cout << f[n] << endl;
        }
    }
    return 0;
}