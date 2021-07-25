//
// Created by ASUS on 05/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        long long F[n+5] = {0};
        F[0] = F[1] = 1;
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= min(i, 3); j++) {
                F[i] += F[i - j];
            }
        }
        cout << F[n] << endl;
    }
    return 0;
}