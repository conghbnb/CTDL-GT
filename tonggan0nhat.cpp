//
// Created by ASUS on 12/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n+1];
        for (int i = 0; i < n; i++) cin >> a[i];
        int res = INT_MAX, n1, n2, sum;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                sum = a[i] + a[j];
                if (abs(sum) < abs(res)) res = sum;
            }
        }
        cout << res << endl;
    }
    return 0;
}