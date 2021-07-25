//
// Created by ASUS on 06/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int c, n;
    cin >> c >> n;
    int w[n+1], f[n+1][c+1];
    memset(f, 0, sizeof(f));
    for (int i = 1; i <= n; i++) cin >> w[i];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= c; j++) {
            if (j >= w[i]) f[i][j] = max(f[i-1][j], f[i-1][j - w[i]] + w[i]);
            else f[i][j] = f[i-1][j];
        }
    }
    cout << f[n][c] << endl;
    return 0;
}