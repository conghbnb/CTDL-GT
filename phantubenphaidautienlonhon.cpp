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
        int a[n+1], res;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            res = -1;
            for (int j = i + 1; j < n; j++) {
                if (a[i] < a[j]) {
                    res = a[j];
                    break;
                }
            }
            cout << res << " ";
        }
        cout<< endl;

    }
    return 0;
}