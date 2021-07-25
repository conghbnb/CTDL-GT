//
// Created by ASUS on 08/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
int b[100];
int check (int a[], int b[], int k) {
    int count = 0;
    for (int i = 1; i <= k; i++) {
        for (int j = 1; j <= k; j++) {
            if (a[i] == b[j]) count++;
        }
    }
    return k - count;
}

void TQS(int a[], int n, int k) {
    int i = k;
    while (i > 0 && a[i] == n - k + i) i--;
    if (i >= 0) {
        a[i]++;
        for (int j = i + 1; j <= k; j++) {
            a[j] = a[i] + j - i;
        }
        cout << check(a, b, k);
    }
    else cout << 0;
}

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int a[k];
        for (int i = 1; i <= k; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        TQS(a, n, k);
        cout << endl;
    }
    return 0;
}