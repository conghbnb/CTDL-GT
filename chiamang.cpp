//
// Created by ASUS on 01/06/2021.
//

#include<bits/stdc++.h>
using namespace std;
int n, k, a[21], sum, mark[21];

int Try (int target) {
    if (target == 0) return 1;
    for (int j = 0; j < n; j++) {
        if (!mark[j] && target - a[j] >= 0) {
            mark[j] = 1;
            if (Try(target - a[j])) return 1;
            mark[j] = 0;
        }
    }
    return 0;
}

int solve () {
    if (sum % k != 0 || n < k) return 0;
    if (n == 1) return 1;
    if (!Try(sum / k)) return 0;
    return 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        memset(mark, 0, sizeof(mark));
        sum = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a+n, greater<int>());
        cout << solve() << endl;
    }
    return 0;
}