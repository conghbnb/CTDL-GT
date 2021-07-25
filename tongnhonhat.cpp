//
// Created by ASUS on 26/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        long long n1 = 0, n2 = 0;
        cin >> n;
        int a[n+1];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        for (int i = 0; i < n; i += 2) n2 = n2 * 10 + a[i];
        for (int i = 1; i < n; i += 2) n1 = n1 * 10 + a[i];
        cout << n1 + n2 << endl;
    }
    return 0;
}