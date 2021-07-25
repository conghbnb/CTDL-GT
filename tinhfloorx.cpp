////
//// Created by ASUS on 22/03/2021.
////
//
//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int t, n;
//    long long x;
//    cin >> t;
//    while (t--) {
//        cin >> n >> x;
//        long long a[n+2];
//        for (int i = 0; i < n; i++) cin >> a[i];
//        if (x < a[0]) cout << -1;
//        else {
//            for (int i = 0; i < n; i++) {
//                if (a[i] > x) {
//                    cout << i;
//                    break;
//                }
//            }
//        }
//        cout << endl;
//    }
//    return 0;
//}
//
// Created by ASUS on 22/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
long long x;
int n;

int solve(long long a[], int l, int r) {
    if (r >= l) {
        int mid = (l + r) / 2;
        if (mid == n - 1 || a[mid] == x || (a[mid] < x && a[mid+1] > x)) return mid+1;
        if (a[mid] > x) return solve(a, l, mid-1);
        if (a[mid] < x || a[mid+1] < x) return solve(a, mid+1, r);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        long long a[n+2];
        for (int i = 0; i < n; i++) cin >> a[i];
        if (x < a[0]) cout << -1;
        else cout << solve(a, 0, n - 1);
        cout << endl;
    }
    return 0;
}