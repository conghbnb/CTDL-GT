//
// Created by ASUS on 23/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
int a[100000], count1, n;

void Try(int i, int j) {
    if (i == n/2 || j == n) return;
    if (a[i] >= 2 * a[j]) {
        count1++;
        Try(i+1, j+1);
    }
    else Try(i, j+1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        count1 = 0;
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n, greater<int>());
        Try(0, n /2);
        cout << n - count1 << endl;
    }
    return 0;
}