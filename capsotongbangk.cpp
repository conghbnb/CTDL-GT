//
// Created by ASUS on 11/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int a[n+1], count = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] + a[j] == k) count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}