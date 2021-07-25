//
// Created by ASUS on 09/05/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int f[n+1];
        if (n == 1) cout << 0 << endl;
        else {
            f[1] = 0; f[2] = 1;
            for (int i = 3; i <= n; i++) {
                f[i] = f[i-1] + 1;
                if (i % 3 == 0)
                    f[i] = (f[i] <= f[i/3] + 1) ? f[i] : f[i/3] + 1;
                if (i % 2 == 0)
                    f[i] = (f[i] <= f[i/2] + 1) ? f[i] : f[i/2] + 1;
            }
            cout << f[n] << endl;
        }
    }
    return 0;
}