//
// Created by ASUS on 22/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
long long F[93];

string stringFibonacci(int n, long long k) {
    if (n == 1) return "A";
    if (n == 2) return "B";
    if (k <= F[n-2]) return stringFibonacci(n-2, k);
    return stringFibonacci(n-1, k - F[n-2]);
}

int main() {
    int t, n;
    long long i;
    F[1] = 1; F[2] = 1;
    for (int i = 3; i < 93; i++) F[i] = F[i-1] + F[i-2];
    cin >> t;
    while (t--) {
        cin >> n >> i;
        cout << stringFibonacci(n, i) << endl;
    }
    return 0;
}