//
// Created by ASUS on 29/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        int n = s.length(), k = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] >= '2') {
                k = i;
                break;
            }
        }
        if (k != -1) {
            for (int i = k; i < n; i++) {
                s[i] = '1';
            }
        }
        int res = 0;
        for (int i = n-1; i >= 0; i--) {
            if (s[i] == '1') res += pow(2, n-i-1);
        }
        cout << res << endl;
    }
    return 0;
}