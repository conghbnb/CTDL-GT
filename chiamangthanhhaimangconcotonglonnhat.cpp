//
// Created by ASUS on 26/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n , k, a[51];
    cin >> t;
    while (t--) {
        int s = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> a[i];
        if (n-k >= k) sort(a, a+n);
        else sort(a, a+n, greater<int>());
        for (int i = 0; i < n; i++) {
            if (i < k) s -= a[i];
            else s += a[i];
        }
        cout << abs(s) << endl;
    }
    return 0;
}