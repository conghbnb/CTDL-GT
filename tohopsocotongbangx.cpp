//
// Created by ASUS on 21/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
int n, x, a[21], b[100], sum, count1 = 0;

void in (int n) {
    cout << "{";
    for (int i = 0; i < n; i++) cout << b[i] << " ";
    cout << b[n] << "} ";
}

void Try1(int i) {
    for (int j = 0; j < n; j++) {
        if (a[j] >= b[i-1] || i == 0) {
            b[i] = a[j];
            sum += a[j];
            if (sum == x) in(i);
            if (sum < x) Try1(i + 1);
            sum -= a[j];
        }
    }
}

void Try2(int i) {
    for (int j = 0; j < n; j++) {
        if (a[j] >= b[i-1] || i == 0) {
            b[i] = a[j];
            sum += a[j];
            if (sum == x) count1++;
            if (sum < x) Try2(i + 1);
            sum -= a[j];
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        count1 = 0;
        sum = 0;
        cin >> n >> x;
        for (int i = 0; i < n; i++) cin >> a[i];
        Try2(0);
        if (count1 != 0) {
            cout << count1 << " ";
            Try1(0);
        }
        else cout << -1;
        cout << endl;
    }
    return 0;
}