//
// Created by ASUS on 06/05/2021.
//

#include<bits/stdc++.h>
using namespace std;

string NPT (string s) {
    int i = s.length() - 1;
    while (i >= 0 && s[i] != '1') {
        s[i] = '1';
        i--;
    }
    if (i >= 0) s[i] = '0';
    return s;
}

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        cout << NPT(s) << endl;
    }
    return 0;
}