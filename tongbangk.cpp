//
// Created by ASUS on 07/04/2021.
//

#include<bits/stdc++.h>
using namespace std;
const unsigned int M = 1e9 + 7;
int a[1005], f[1005], n, k;

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        memset(f, 0, sizeof(f));
        f[0] = 1;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= k; i++) {
            for (int j = 1; j <= n; j++) {
                if (i >= a[j]) f[i] = (f[i] + f[i - a[j]]) % M;
            }
        }
        cout << f[k] << endl;
    }
    return 0;
}