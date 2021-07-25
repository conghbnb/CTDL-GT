//
// Created by ASUS on 11/06/2021.
//

#include<bits/stdc++.h>
using namespace std;

int X[21], cnt, n, tp;

void in (int m) {
    for (int i = 0; i <= m; i++) cout << X[i];
    for (int i = m; i >= 0; i--) cout << X[i];
    cout << " ";
}

void Try (int i) {
    if (cnt == n) return;
    for (int j = 4; j <= 5; j++) {
        X[i] = j;
        if (i == tp) {
            if ((i*2) % 2 == 0 && cnt < n) {
                in(i);
                cnt++;
            }
        }
        else Try(i+1);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cnt = 0, tp = 0;
        cin >> n;
        while (cnt < n) {
            Try(0);
            tp++;
        }
        cout << endl;
    }
    return 0;
}