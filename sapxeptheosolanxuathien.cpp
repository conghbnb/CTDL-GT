//
// Created by ASUS on 02/06/2021.
//

#include<bits/stdc++.h>
using namespace std;
int cnt[100001];
int cmp (int x, int y) {
    if (cnt[x] == cnt[y]) return x < y;
    return cnt[x] > cnt[y];
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        memset(cnt, 0, sizeof(cnt));
        cin >> n;
        int a[n+1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }
        sort(a, a+n, cmp);
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}