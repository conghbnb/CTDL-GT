//
// Created by ASUS on 10/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n+1];
        long long f[n+1];
        for (int i = 0; i < n; i++) cin >> a[i];
        f[1] = a[0];
        f[2] = max(a[0], a[1]);
        for (int i = 3; i <= n; i++) {
            f[i] = max(f[i-2] + a[i-1], f[i-1]);
        }
        cout << f[n] << endl;
    }
    return 0;
}