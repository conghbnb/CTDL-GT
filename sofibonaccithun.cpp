//
// Created by ASUS on 23/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
const long long Mod = 1000000007;

void multiply(long long F[2][2], long long M[2][2])
{
    long long x = ((F[0][0] * M[0][0]) % Mod + (F[0][1] * M[1][0]) % Mod) % Mod;
    long long y = ((F[0][0] * M[0][1]) % Mod + (F[0][1] * M[1][1]) % Mod) % Mod;
    long long z = ((F[1][0] * M[0][0]) % Mod + (F[1][1] * M[1][0]) % Mod) % Mod;
    long long w = ((F[1][0] * M[0][1]) % Mod + (F[1][1] * M[1][1]) % Mod) % Mod;

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void power(long long F1[2][2], int n) {
    if (n == 0 || n == 1) return;
    long long F2[2][2] = {{1, 1}, {1, 0}};
    power(F1, n/2);
    multiply(F1, F1);
    if (n % 2 != 0) multiply(F1, F2);
}

long long fib(int n) {
    long long F[2][2] = {{1, 1}, {1, 0}};
    if (n == 0) return 0;
    power(F, n - 1);
    return F[0][0];
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << fib(n) << endl;
    }
    return 0;
}