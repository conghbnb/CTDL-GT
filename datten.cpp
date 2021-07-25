//
// Created by ASUS on 01/06/2021.
//

#include <bits/stdc++.h>
using namespace std;
int X[20], n, k;

void in () {
    for (int i = 1; i <= k; i++) {
        cout << (char)('A' + X[i] - 1);
    }
    cout << endl;
}

void Try (int i) {
    for (int j = X[i-1] + 1; j <= n; j++) {
            X[i] = j;
            if (i == k) in();
            else Try(i+1);
    }
}

int main() {
    X[0] = 0;
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        Try(1);
    }
    return 0;
}