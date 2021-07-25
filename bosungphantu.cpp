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
        sort(a, a+n);
        int count = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i-1] > 1) count += a[i] - a[i-1] - 1;
        }
        cout << count << endl;
    }
    return 0;
}