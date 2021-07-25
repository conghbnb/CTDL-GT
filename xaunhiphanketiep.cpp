//
// Created by ASUS on 08/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

string NPKT(string s) {
    int i = s.length() - 1;
    while (i >= 0 && s[i] != '0') {
        s[i] = '0';
        i--;
    }
    if (i >= 0) s[i] = '1';
    return s;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << NPKT(s) << endl;
    }
    return 0;
}