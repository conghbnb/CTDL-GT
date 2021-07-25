//
// Created by ASUS on 01/04/2021.
//

#include<bits/stdc++.h>
using namespace std;
int n;
char X[17];

void Try(int i) {
    for (int j = 1; j >= 0; j--) {
        if (j == 1) X[i] = 'A';
        else if (j == 0 && X[i-1] != 'H') X[i] = 'H';
        else return;
        if (i == n - 2) {
            for (int k = 0; k <= n-1; k++) cout << X[k];
            cout << endl;
        }
        else Try(i+1);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        X[0] = 'H';
        X[1] = 'A';
        X[n-1] = 'A';
        if (n == 2) cout << "HA" << endl;
        else if (n == 3) cout << "HAA" << endl;
        else Try(2);
    }
    return 0;
}