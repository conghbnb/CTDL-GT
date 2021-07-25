//
// Created by ASUS on 05/04/2021.
//

#include<bits/stdc++.h>
using namespace std;
int C[1001][1001];
const unsigned int M = 1000000007;

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) C[i][j] = 1;
                else C[i][j] = (C[i-1][j-1] + C[i-1][j]) % M;
            }
        }
        cout << C[n][k] << endl;
    }
    return 0;
}