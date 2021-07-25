//
// Created by ASUS on 21/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
int n, a[16][16], mark[16], min1 = 100, x[16], res = 111111, s = 0;

void Try(int i) {
    for (int j = 2; j <= n; j++) {
        if (mark[j]) {
            x[i] = j;
            s += a[x[i-1]][j];
            mark[j] = 0;
            if (i == n) {
                if (s + a[x[n]][1] < res) res = s + a[x[n]][1];
            }
            else if (s + min1 * (n - i + 1) < res) Try(i+1);
            s -= a[x[i-1]][j];
            mark[j] = 1;
        }
    }
}

int main() {
    memset(mark, 1, sizeof(mark));
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (min1 > a[i][j] && a[i][j] != 0) min1 = a[i][j];
        }
    }
    mark[1] = 0;
    x[1] = 1;
    Try(2);
    cout << res;
    return 0;
}