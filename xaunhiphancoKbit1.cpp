//
// Created by ASUS on 08/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

void stringKBit1 (int n, int k) {
    int flag = 1, a[16] = {0};
    while (flag) {
        int sum = 0;
        for (int i = 1; i <= n; i++) sum += a[i];
        if (sum == k) {
            for (int i = 1; i <= n; i++) cout << a[i];
            cout << endl;
        }
        int j = n;
        while (j > 0 && a[j] != 0) a[j--] = 0;
        if (j > 0) a[j] = 1;
        else flag = 0;
    }
}

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        stringKBit1(n, k);
    }
    return 0;
}