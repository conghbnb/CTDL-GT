//
// Created by ASUS on 22/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
long long F[93];

int stringBinary(int n, long long k) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (k <= F[n-2]) return stringBinary(n-2, k);
    else return stringBinary(n-1, k - F[n-2]);
}

int main() {
    int t, n;
    long long k;
    F[1] = 1; F[2] = 1;
    for (int i = 3; i < 93; i++) F[i] = F[i-1] + F[i-2];
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cout << stringBinary(n, k) << endl;
    }
    return 0;
}