//
// Created by ASUS on 12/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        long long a[n], b[m], c[n+m];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            c[i] = a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            c[i+n] = b[i];
        }
        sort(c, c+n+m);
        for (int i = 0; i < n + m; i++) cout << c[i] << " ";
        cout << endl;
    }
    return 0;
}