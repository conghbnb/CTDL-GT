//
// Created by ASUS on 06/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[1001], F[1001];
        int res = 1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            F[i] = 1;
        }
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (a[i] >= a[j])
                    F[i] = max(F[i], F[j] + 1);
            }
            res = max(res, F[i]);
        }
        cout << n - res << endl;
    }
    return 0;
}