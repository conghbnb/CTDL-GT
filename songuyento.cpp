//
// Created by ASUS on 11/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
int n, a[10], p, s, tong, k1, k2, flag;
bool kt[200];

void Sieve() {
    kt[0] = kt[1] = false;
    for (int i = 2; i <= 200; i++) kt[i] = true;
    for (int i = 2; i <= 200; i++) {
        if (kt[i]) {
            for (int j = i * i; j <= 200; j+=i) {
                kt[j] = false;
            }
        }
    }
}

void in() {
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void Try (int i) {
    for (int j = p + 1; j < s; j++) {
        if (kt[j] && j > a[i - 1]) {
            a[i] = j;
            tong += j;
            k1++;
            kt[j] = false;
            if (k1 == n && tong == s) {
                if (flag) k2++;
                else in();
            }
            if (k1 < n && tong < s) Try(i + 1);
            tong -= j;
            k1--;
            kt[j] = true;
        }
    }
}

int main() {
    Sieve();
    int t;
    cin >> t;
    while (t--) {
        k1 = 0, k2 = 0, tong = 0;
        cin >> n >> p >> s;
        flag = 1;
        Try(1);
        cout << k2 << endl;
        if (k2 != 0) {
            flag = 0, k1 = 0, tong = 0;
            Try(1);
        }
    }
    return 0;
}