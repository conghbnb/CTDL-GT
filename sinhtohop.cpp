//
// Created by ASUS on 08/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

void STH (int n, int k) {
    int a[15], i, flag = 1;
    for (i = 1; i <= k; i++) a[i] = i;
    while (flag) {
        for (i = 1; i <= k; i++) cout << a[i];
        cout << " ";
        i = k;
        while (i > 0 && a[i] == n - k + i) i--;
        if (i > 0) {
            a[i]++;
            for (int j = i + 1; j <= k; j++) {
                a[j] = a[i] + j - i;
            }
        }
        else flag = 0;
    }
}

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        STH(n , k);
        cout << endl;
    }
    return 0;
}