//
// Created by ASUS on 14/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
int m, n, a[100][100], res;

void Try (int i, int j) {
    if (i == m - 1 && j == n - 1) res++;
    if (i < m - 1) Try (i+1, j);
    if (j < n - 1) Try(i, j+1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        res = 0;
        cin >> m >> n;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        Try(0, 0);
        cout << res << endl;
    }
    return 0;
}