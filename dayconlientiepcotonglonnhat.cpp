//
// Created by ASUS on 22/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

//int max(int a, int b) { return (a > b) ? a : b; }
//
//int max(int a, int b, int c) { return max(max(a, b), c); }
//
//int maxCrossingSum(int a[], int l, int m, int r) {
//    int sum = 0, max_left = INT16_MIN, max_right = INT16_MIN;
//    for (int i = m; i >= l; i--) {
//        sum += a[i];
//        max_left = max(sum, max_left);
//    }
//    sum = 0;
//    for (int i = m+1; i <= r; i++) {
//        sum += a[i];
//        max_right = max(sum, max_right);
//    }
//    return max(max_left, max_right, max_right + max_left);
//}
//
//int maxSubArraySum(int a[], int l, int r) {
//    int m = (l + r) / 2;
//    if (l == r) return a[l];
//    return max(maxSubArraySum(a, l, m), maxSubArraySum(a, m+1, r), maxCrossingSum(a, l, m, r));
//}

int maxSubArraySum(int a[], int n) {
    int res = 0, curr_max = 0;
    for (int i = 0; i < n; i++) {
        curr_max += a[i];
        if (curr_max < 0) curr_max = 0;
        else if (curr_max > res) res = curr_max;
    }
    return res;
}

int main() {
    int t, n, a[101];
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << maxSubArraySum(a, n) << endl;
    }
    return 0;
}