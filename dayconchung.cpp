//
// Created by ASUS on 02/06/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, k;
    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        int a[n+2], b[m+2], c[k+3];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        for (int i = 0; i < k; i++) cin >> c[i];
        int n1 = 0, m1 = 0, k1 = 0, flag = 0;
        while (n1 < n && m1 < m && k1 < k) {
            if (a[n1] == b[m1] && b[m1] == c[k1]) {
                cout << a[n1] << " ";
                n1++; m1++; k1++;
                flag = 1;
            }
            else if (a[n1] < b[m1]) n1++;
            else if (b[m1] < c[k1]) m1++;
            else k1++;
        }
        if (!flag) cout << "NO";
        cout << endl;
    }
    return 0;
}