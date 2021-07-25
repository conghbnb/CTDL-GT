//
// Created by ASUS on 06/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, v;
    cin >> t;
    while (t--) {
        cin >> n >> v;
        int a[n+1], c[n+1], f[n+1][v+1];
        memset(f, 0, sizeof(f));
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> c[i];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= v; j++) {
                if (a[i] <= j) f[i][j] = max(f[i-1][j - a[i]] + c[i], f[i-1][j]);
                else f[i][j] = f[i-1][j];
            }
        }
        cout << f[n][v] << endl;
    }
    return 0;
}