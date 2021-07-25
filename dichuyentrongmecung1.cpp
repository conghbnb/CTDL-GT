//
// Created by ASUS on 13/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
int a[10][10], n, ok;

void Try (int i, int j, string s) {
    if (!a[0][0] || !a[n-1][n-1]) return;
    if (i == n - 1 && j == i) {
        cout << s << " ";
        ok = 1;
    }
    if (i < n-1 && a[i + 1][j])
        Try(i + 1, j, s + "D");
    if (j < n-1 && a[i][j + 1])
        Try(i, j + 1, s + "R");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        ok = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        Try(0, 0, "");
        if (!ok) cout << -1;
        cout << endl;
    }
    return 0;
}