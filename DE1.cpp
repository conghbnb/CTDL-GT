//
// Created by ASUS on 22/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int n) {
    int res = 0, curr_sum = 0, curr_average = 0, curr_len = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= curr_average) {
            curr_sum += a[i];
            curr_len++;
            curr_average = curr_sum / curr_len;
            res = curr_len > res ? curr_len : res;
        }
        else {
            curr_sum += a[i];
            curr_len++;
            curr_average = curr_sum / curr_len;
            res = curr_len > res ? curr_len : res;
        }
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