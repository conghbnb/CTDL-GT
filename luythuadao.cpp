//
// Created by ASUS on 21/03/2021.
//

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const unsigned int M = 1000000007;

long long Reverse(long long n){
    long long reNum = n % 10;
    n /= 10;
    int last;
    while(n > 0){
        last = n % 10;
        n /= 10;
        reNum = reNum * 10 + last;
    }
    return reNum;
}

ll power(long long n, long long k) {
    if (k == 0) return 1;
    ll res = power(n, k/2);
    if (k % 2 == 0) return (res * res) % M;
    return (res * res) % M * n % M;
}

int main() {
    int t;
    long long n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << power(n, Reverse(n)) << endl;
    }
    return 0;
}