//
// Created by ASUS on 22/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        long long a[n+1], b[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n - 1; i++) cin >> b[i];
        for (int i = 0; i < n - 1; i++) {
            if (a[i] != b[i]) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}