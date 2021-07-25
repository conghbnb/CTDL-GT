//
// Created by ASUS on 10/04/2021.
//

#include<bits/stdc++.h>
using namespace std;
int f[10001], n;

void solve() {
    for (int i = 1; i <= 10001; i++) {
        f[i] = i;
        for (int j = 1; j <= sqrt(i); j++) {
            f[i] = min(f[i], f[i - j * j] + 1);
        }
    }
}

int main() {
    int t;
    cin >> t;
    solve();
    while (t--) {
        cin >> n;
        cout << f[n] << endl;
    }
    return 0;
}