//
// Created by ASUS on 12/04/2021.
//

#include<bits/stdc++.h>
using namespace std;
bool kt[1000001];

void Sieve() {
    kt[0] = kt[1] = false;
    for (int i = 2; i <= 1000000; i++) kt[i] = true;
    for (int i = 2; i * i <= 1000000; i++) {
        if (kt[i]) {
            for (int j = i * i; j <= 1000000; j+=i) {
                kt[j] = false;
            }
        }
    }
}

int main() {
    int t, n;
    cin >> t;
    Sieve();
    while (t--) {
        cin >> n;
        int flag = 0;
        for (int i = 2; i <= n/2; i++) {
            if (kt[n-i] && kt[i]) {
                flag = 1;
                cout << i << " " << n - i;
                break;
            }
        }
        if (!flag) cout << -1;
        cout << endl;
    }
    return 0;
}