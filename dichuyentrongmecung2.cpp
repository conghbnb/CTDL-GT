//
// Created by ASUS on 14/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
int n, a[8][8], check, mark[8][8];

void Try (int i, int j, string s) {
    if (!a[0][0] || !a[n-1][n-1]) return;
    if (i == j && i == n - 1) {
        cout << s << " ";
        check = 1;
    }
    if (i < n - 1 && a[i+1][j] && !mark[i+1][j]) {
        mark[i][j] = 1;
        Try (i+1, j, s + "D");
        mark[i][j] = 0;
    }
    if (j > 0 && a[i][j-1] && !mark[i][j-1]) {
        mark[i][j] = 1;
        Try(i, j-1, s + "L");
        mark[i][j] = 0;
    }
    if (j < n - 1 && a[i][j+1] && !mark[i][j+1]) {
        mark[i][j] = 1;
        Try(i, j+1, s + "R");
        mark[i][j] = 0;
    }
    if (i > 0 && a[i-1][j] && !mark[i-1][j]) {
        mark[i][j] = 1;
        Try (i-1, j, s + "U");
        mark[i][j] = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        check = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
                mark[i][j] = 0;
            }
        }
        Try(0, 0, "");
        if (!check) cout << -1;
        cout << endl;
    }
    return 0;
}