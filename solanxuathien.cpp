//
// Created by ASUS on 12/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int count(int arr[], int x, int n) {
    int *low = lower_bound(arr, arr+n, x);
    if (low == (arr + n) || *low != x) return -1;
    int *high = upper_bound(low, arr+n, x);
    return high - low;
}

int main() {
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        int a[n+1];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << count(a, x, n) << endl;
    }
    return 0;
}