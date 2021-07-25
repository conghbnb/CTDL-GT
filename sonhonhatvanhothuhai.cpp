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
        int a[n+1], flag = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] != a[i-1] && i != 0) flag = 1;
        }
        sort(a, a+n);
        if (!flag) cout << -1;
        else {
            cout << a[0] << " ";
            for (int i = 1; i < n; i++) {
                if (a[i] != a[0]) {
                    cout << a[i];
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}