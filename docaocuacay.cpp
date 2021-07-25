//
// Created by ASUS on 28/05/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, u, v;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n] = {0};
        for (int i = 0; i < n-1; i++) {
            cin >> u >> v;
            a[v] = a[u] + 1;
        }
        sort(a+1, a+n+1);
        cout << a[n] << endl;
    }
    return 0;
}