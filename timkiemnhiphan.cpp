//
// Created by ASUS on 22/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

//tim kiem tuyen tinh (O(n))
//
//sap xep (O(nlogn)) -> tim kiem nhi phan O(logn)
//        O(n^2)
//        tim kiem tam phan

        /// BAI TAP : tìm kiếm lớn nhất trong mảng nhỏ hơn bằng k;

int k;
int binarySearch(int a[], int l, int r) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (a[mid] == k) return mid + 1; // dk ket thuc
        if (a[mid] > k) return binarySearch(a, l, mid - 1);
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
        int res = binarySearch(a, 0, n-1);
        if (res == -1) cout << "NO";
        else cout << res;
        cout << endl;
    }
    return 0;
}