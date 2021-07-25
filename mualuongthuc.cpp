//
// Created by ASUS on 31/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, s, m;
    cin >> t;
    while (t--) {
        cin >> n >> s >> m;
        if (n < m || (6 * n < 7 * m && s > 6)) cout << -1;
        else if ((s * m) % n == 0) cout << (s * m) / n;
        else cout << ((s * m) / n) + 1;
        cout << endl;
    }
    return 0;
}