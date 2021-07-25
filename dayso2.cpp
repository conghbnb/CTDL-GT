//
// Created by ASUS on 12/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
int a[10], n;
stack<int> stk;

void in (int k) {
    cout << "[";
    for (int i = 0; i < n - k - 1; i++) cout << a[i] << " ";
    cout << a[n-k-1] << "]" << endl;
}

void Try (int i) {
    in(i);
    for (int j = 0; j < n - i; j++) {
        a[j] += a[j+1];
    }
    if (i < n-1) Try(i+1);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        Try(0);
    }
    return 0;
}