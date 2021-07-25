//
// Created by ASUS on 22/03/2021.
//

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const unsigned int M = 123456789;

ll power(long long k) {
    if (k == 0) return 1;
    ll res = power(k/2);
    if (k % 2 == 0) return (res * res) % M;
    return (res * res) % M * 2 % M;
}

int main() {
    int t;
    long long n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << power(n-1) << endl;
    }
    return 0;
}
