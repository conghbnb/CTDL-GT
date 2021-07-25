//
// Created by ASUS on 12/04/2021.
//

#include<bits/stdc++.h>
using namespace std;
int k;
int binarySearch(int a[], int l, int r) {
    if (r >= l) {
        int mid = l + (-l + r) / 2;
        if (a[mid] == k) return 1;
        if (a[mid] > k) return binarySearch(a, l, mid-1);
        return binarySearch(a, mid + 1, r);
    }
    return -1;
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int a[n+1];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << binarySearch(a, 0, n-1) << endl;
    }
    return 0;
}