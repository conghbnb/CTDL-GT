//
// Created by ASUS on 19/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
int n, a[101][101];

void FLOYD () {
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (a[i][j] > a[i][k] + a[k][j]) a[i][j] = a[i][k] + a[k][j];
            }
        }
    }
}

int main() {
    int m, Q, t1, t2, a1, b, c;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ( i == j) a[i][j] = 0;
            else a[i][j] = INT16_MAX;
        }
    }
    for (int i = 1; i <= m; i++) {
        cin >> a1 >> b >> c;
        a[a1][b] = c;
        a[b][a1] = c;
    }
    FLOYD();
    cin >> Q;
    while (Q--) {
        cin >> t1 >> t2;
        cout << a[t1][t2] << endl;
    }
    return 0;
}