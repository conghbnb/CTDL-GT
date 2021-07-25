//
// Created by ASUS on 01/06/2021.
//

#include <bits/stdc++.h>
using namespace std;
int X[20], n;

int checkReversible () {
    for (int i = 1; i <= n/2; i++) {
        if (X[i] != X[n - i + 1]) return 0;
    }
    return 1;
}

void in () {
    for (int i = 1; i <= n; i++) {
        cout << X[i] << " ";
    }
    cout << endl;
}

void Try (int i) {
    for (int j = 0; j <= 1; j++) {
        X[i] = j;
        if (i == n) {
            if (checkReversible()) in();
        }
        else Try(i+1);
    }
}

int main() {
    cin >> n;
    Try(1);
    return 0;
}