//
// Created by ASUS on 26/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

int solve(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i] && a[i] != b[n - i - 1]) return 0;
    }
    return 1;
}

int main() {
    int t, n, a[51], b[51];
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b+n);
        if (solve(a, b, n)) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
    return 0;
}