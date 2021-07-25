//
// Created by ASUS on 08/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

void HVN (int n) {
    int flag = 1, a[10];
    for (int i = 1; i <= n; i++) a[i] = n - i + 1;
    while (flag) {
        for (int i = 1; i <= n; i++) cout << a[i];
        cout << " ";
        int j = n - 1;
        while (j > 0 && a[j] < a[j + 1]) j--;
        if (j > 0) {
            int k = n;
            while (a[j] < a[k]) k--;
            swap(a[j], a[k]);
            int l = j + 1, r = n;
            while (l <= r) {
                swap(a[l], a[r]);
                l++; r--;
            }
        }
        else flag = 0;
    }
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        HVN(n);
        cout << endl;
    }
    return 0;
}