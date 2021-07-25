//
// Created by ASUS on 11/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
int n, s, a[31], mark[31], count1, res;

void Try (int i) {
    for (int j = 1; j >= 0; j--) {
        if (mark[i]) {
            s -= a[i] * j;
            count1 += j;
            mark[i] = 0;
            if (s == 0 && i < n && count1 < res) res = count1;
            else if (s > 0 && i < n - 1) Try(i + 1);
            s += a[i] * j;
            count1 -= j;
            mark[i] = 1;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        count1 = 0, res = n + 1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mark[i] = 1;
        }
        sort(a, a+n, greater<int>());
        Try(0);
        if (res == n + 1) cout << -1;
        else cout << res;
        cout << endl;
    }
    return 0;
}