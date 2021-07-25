//
// Created by ASUS on 02/06/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        long long a[n+1], b[n+1];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        sort(a, a+n);
        sort(b, b+n, greater<int>());
        long long int res = 0;
        for (int i = 0; i < n; i++) {
            res += a[i] * b[i];
        }
        cout << res << endl;
    }
    return 0;
}