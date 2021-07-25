//
// Created by ASUS on 06/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        int C[n+1][n+1];
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++)
                C[i][j] = 0;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i != j && s[i-1] == s[j-1]) C[i][j] = C[i-1][j-1] + 1;
                else C[i][j] = max(C[i-1][j], C[i][j-1]);
            }
        }
        cout << C[n][n] << endl;
    }
    return 0;
}