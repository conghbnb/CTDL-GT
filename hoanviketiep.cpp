//
// Created by ASUS on 08/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

void HVKT(int a[], int n) {
    int i = n - 1;
    while (i > 0 && a[i] > a[i + 1]) i--;
    if (i > 0) {
        int k = n;
        while (a[k] < a[i]) k--;
        swap(a[k], a[i]);
        int l = i + 1, r = n;
        while (l <= r) {
            swap(a[l], a[r]);
            l++; r--;
        }
    }
    for (int j = 1; j <= n; j++) {
        cout << a[j] << " ";
    }
    cout << endl;
}

int main() {
    int t, n, a[1000];
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        HVKT(a, n);
    }
    return 0;
}