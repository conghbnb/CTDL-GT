//
// Created by ASUS on 05/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, f[1001], a[1001];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int res = 0;
    for (int i = 0; i < n; i++) {
        f[i] = 1;
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i])
                f[i] = max(f[i], f[j] + 1);
        }
        res = max(res, f[i]);
    }
    cout << res << endl;
    return 0;
}