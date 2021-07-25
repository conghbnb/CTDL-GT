//
// Created by ASUS on 23/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
const long long Mod = 1000000007;
long long a[11][11], b[11][11];
int n;

void multiply(long long A[11][11], long long B[11][11]) {
    long long C[11][11];
    for(int i = 0; i<n ; i++)
        for(int k = 0; k<n ; k++) {
            C[i][k] = 0;
            for(int j = 0; j<n ; j++)
                C[i][k] = (C[i][k] + A[i][j] * B[j][k] % Mod) % Mod;
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            A[i][j] = C[i][j];
}

void power(int k) {
    if (k == 0 || k == 1) return;
    power(k/2);
    multiply(a, a);
    if (k % 2 != 0) multiply(a, b);
}

int main() {
    int t, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >>  a[i][j];
                b[i][j] = a[i][j];
            }
        }
        power(k);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}