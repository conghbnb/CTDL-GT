//
// Created by ASUS on 01/04/2021.
//
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
        cin >> n;
        int a[n+1];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        int max1 = max(a[n - 1] * a[n - 2], a[0] * a[1]);
        int max2 = max(a[n-1] * a[0] * a[1], a[n-1] * a[n-2] * a[n-3]);
        cout << max(max1, max2) << endl;
    return 0;
}