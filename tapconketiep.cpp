//
// Created by ASUS on 08/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

void TCKT(int a[], int n, int k) {
    int i = k;
    while (i > 0 && a[i] == n - k + i) i--;
    if (i > 0) {
        a[i]++;
        for (int j = i + 1; j <= k; j++) {
            a[j] = a[i] + j - i;
        }
        for (int j = 1; j <= k; j++) {
            cout << a[j] << " ";
        }
    }
    else {
        for (int j = 1; j <= k; j++) {
            cout << j << " ";
        }
    }
}

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int a[n];
        for (int i = 1; i <= k; i++) cin >> a[i];
        TCKT(a, n, k);
        cout << endl;
    }
    return 0;
}