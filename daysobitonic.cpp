//
// Created by ASUS on 07/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, s;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n+1], tang[n+1], giam[n+1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            tang[i] = giam[i] = a[i];
        }
        for (int i = 1; i < n; i++) {
            s = 0;
            for (int j = 0; j < i; j++) {
                if (a[i] > a[j]) s = max(s, tang[j]);
            }
            tang[i] += s;
        }
        for (int i = n-2; i >= 0; i--) {
            s = 0;
            for (int j = i + 1; j < n; j++) {
                if (a[j] < a[i]) s = max(s, giam[j]);
            }
            giam[i] += s;
        }
        int res = 0;
        for (int i = 0; i < n; i++) {
            res = max(res, tang[i] + giam[i] - a[i]);
        }
        cout << res << endl;
    }
    return 0;
}