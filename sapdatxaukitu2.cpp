//
// Created by ASUS on 30/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

int solve(int a[], int n, int D) {
    int j = 0;
    while (a[j] != 0) {
        for (int k = 0; k < a[j]; k++) {
            if (j + k * D > n) return 0;
        }
        j++;
    }
    return 1;
}

int main() {
    int t, D;
    string s;
    cin >> t;
    while (t--) {
        cin >> D;
        cin >> s;
        int len = s.length(), mark[26] = {0};
        for (int i = 0; i < len; i++) {
            mark[s[i] - 'A']++;
        }
        sort(mark, mark + 26, greater<int>());
        if (solve(mark, len, D)) cout << 1;
        else cout << -1;
        cout << endl;
    }
    return 0;
}