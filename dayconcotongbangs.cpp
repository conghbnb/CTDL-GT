//
// Created by ASUS on 05/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, s, a;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        int L[40001] = {0};
        L[0] = 1;
        for (int i = 1; i <= n; i++) {
            cin >> a;
            L[a] = 1;
            for (int j = s; j >= a; j--) {
                if (!L[j] && L[j - a]) L[j] = 1;
            }
        }
        if (L[s]) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}