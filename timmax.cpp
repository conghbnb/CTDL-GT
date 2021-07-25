//
// Created by ASUS on 26/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        long long max = 0;
        cin >> n;
        int a[n+1];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        for (int i = 0; i < n; i++) {
            max = ((a[i] * i) % M + max) % M;
        }
        cout << max << endl;
    }
    return 0;
}