//
// Created by ASUS on 14/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
int n, k, a[10], b[10], sum, check;

void in (int n) {
    cout << "[";
    for (int i = 0; i < n; i++) cout << b[i] << " ";
    cout << b[n] << "] ";
}

void Try (int i, int m) {
    for (int j = m; j < n; j++) {
        b[i] = a[j];
        sum += b[i];
        if (sum == k) {
            in(i);
            check = 1;
        }
        if (sum < k) Try(i+1, j+1);
        sum -= b[i];
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        check = 0, sum = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        Try(0, 0);
        if (!check) cout << -1;
        cout << endl;
    }
    return 0;
}