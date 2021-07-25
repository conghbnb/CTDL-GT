//
// Created by ASUS on 05/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s1, s2;
    cin >> t;
    while (t--) {
        cin >> s1 >> s2;
        int len1 = s1.length(), len2 = s2.length();
        int C[len1+1][len2+1];
        for (int i = 0; i <= len1; i++) {
            for (int j = 0; j <= len2; j++)
                C[i][j] = 0;
        }
        for (int i = 1; i <= len1; i++) {
            for (int j = 1; j <= len2; j++) {
                if (s1[i-1] == s2[j-1]) C[i][j] = C[i-1][j-1] + 1;
                else C[i][j] = max(C[i-1][j], C[i][j-1]);
            }
        }
        cout << C[len1][len2] << endl;
    }
    return 0;
}