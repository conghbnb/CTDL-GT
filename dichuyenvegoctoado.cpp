//
// Created by ASUS on 08/04/2021.
//

#include<bits/stdc++.h>
using namespace std;
long long f[26][26];
int n, m;

void solve() {
    for (int i = 0; i <= 25; i++) f[i][0] = 1;
    for (int i = 0; i <= 25; i++) f[0][i] = 1;
    for (int i = 1; i <= 25; i++) {
        for (int j = 1; j <= 25; j++) {
            f[i][j] = f[i-1][j] + f[i][j-1];
        }
    }
}

int main() {
    int t;
    cin >> t;
    solve();
    while (t--) {
        cin >> n >> m;
        cout << f[n][m] << endl;
    }
    return 0;
}