//
// Created by ASUS on 21/03/2021.
//

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const unsigned int M = 1000000007;

ll power(int n, int k) {
    if (k == 0) return 1;
    ll res = power(n, k/2);
    if (k % 2 == 0) return (res * res) % M;
    return (res * res) % M * n % M;
}

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cout << power(n, k) << endl;
    }
    return 0;
}