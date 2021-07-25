//
// Created by ASUS on 05/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1], index[n+1];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        index[a[i]] = i+1;
    }
    int max_len = 1, cnt = 1;
    for (int i = 1; i < n; i++) {
        if (index[i] < index[i+1]) {
            cnt++;
            max_len = max(max_len, cnt);
        }
        else cnt = 1;
    }
    cout << n - max_len;
    return 0;
}