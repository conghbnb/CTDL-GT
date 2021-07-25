//
// Created by ASUS on 22/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
int n;
long long k, len;

void Try (int n, long long k, long long len) {
    if (n == 1) {
        cout << 1;
        return;
    }
    if (len == k) {
        cout << n;
        return;
    }
    else if (k > len) Try(n - 1, 2*len-k, len/2);
    else Try(n - 1, k, len/2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        len = pow(2, n - 1);
        Try(n, k, len);
        cout << endl;
    }
    return 0;
}