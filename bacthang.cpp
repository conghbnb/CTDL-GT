//
// Created by ASUS on 05/04/2021.
//

#include<bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        long long F[n+5] = {0};
        F[0] = F[1] = 1;
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= min(i, k); j++) {
                F[i] = (F[i] + F[i - j]) % M;
            }
        }
        cout << F[n] << endl;
    }
    return 0;
}