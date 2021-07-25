//
// Created by ASUS on 22/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
int n;

int firstZero(int a[], int l, int r) {
    if (r >= l) {
        int mid = (l + r) / 2;
        if ((mid == n - 1 || a[mid + 1]) && !a[mid]) return mid;
        if (a[mid]) return firstZero(a, l, mid-1);
        else return firstZero(a, mid + 1, r);
    }
    return -1;
}

int countZeros(int a[], int n) {
    int k = firstZero(a, 0, n - 1);
    if (k == -1) return 0;
    return k + 1;
}

int main() {
    int t, a[1001];
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << countZeros(a, n) << endl;
    }
    return 0;
}