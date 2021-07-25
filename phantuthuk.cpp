//
// Created by ASUS on 22/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, m, n, k;
    cin >> t;
    while (t--) {
        cin >> m >> n >> k;
        int a[m+1], b[n+1], c[m+n+2];
        for (int i = 0; i < m; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        merge(a, a+m, b, b+n, c);
        cout << c[k-1] << endl;
    }
    return 0;
}