//
// Created by ASUS on 11/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int a[n+1], b[m+1], c[n+m+1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            c[i] = a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            c[i+n] = b[i];
        }
        sort(c, c+n+m);
        for (int i = 0; i < n + m; i++) {
            if (c[i] != c[i+1]) cout << c[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < n + m; i++) {
            if (c[i] == c[i+1]) cout << c[i] << " ";
        }
        cout << endl;
    }
    return 0;
}