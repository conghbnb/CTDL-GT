//
// Created by ASUS on 11/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n+1], b[n+1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b+n);
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                cout << i + 1 << " ";
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] != b[i]) {
                cout << i + 1 << endl;
                break;
            }
        }
     }
    return 0;
}