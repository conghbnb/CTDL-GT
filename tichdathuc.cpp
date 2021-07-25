//
// Created by ASUS on 23/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, m, n, P[100], Q[100], R[200];
    cin >> t;
    while (t--) {
        cin >> m >> n;
        for (int i = 0; i < m; i++) cin >> P[i];
        for (int i = 0; i < n; i++) cin >> Q[i];
        for (int i = 0; i < n+m; i++) R[i] = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                R[i+j] += P[i] * Q[j];
            }
        }
        for (int i = 0; i < m+n-1; i++) cout << R[i] << " ";
        cout << endl;
    }
    return 0;
}