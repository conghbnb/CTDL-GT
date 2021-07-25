//
// Created by ASUS on 14/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
int n, a[100], sum, check, s;

void Try (int i, int m) {
    for (int j = m; j < n; j++) {
        sum += a[j];
        if (sum == s/2) {
            check = 1;
            return;
        }
        if (sum < s/2) Try(i+1, j+1);
        sum -= a[j];
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        check = 0, sum = 0, s = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s += a[i];
        }
        if (s % 2 != 0) cout << "NO";
        else {
            Try(0, 0);
            if (check) cout << "YES";
            else cout << "NO";
        }
        cout << endl;
    }
    return 0;
}