//
// Created by ASUS on 07/04/2021.
//

#include<bits/stdc++.h>
using namespace std;
const unsigned int M = 1e9 + 7;
int f[101][1001];

void solve() {
    int i, j, k;
    for (i = 1; i < 10; i++) f[1][i] = 1;
    for (i = 1; i <= 100; i++) {
        for (j = 1; j <= 1000; j++) {
            for (k = 0; k < 10; k++)
                if (j >= k) f[i][j] = (f[i][j] + f[i-1][j-k]) % M;
        }
    }
}

int main() {
    int t, n , k;
    cin >> t;
    solve();
    while (t--) {
        cin >> n >> k;
        cout << f[n][k] << endl;
    }
    return 0;
}