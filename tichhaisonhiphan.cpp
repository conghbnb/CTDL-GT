//
// Created by ASUS on 23/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

long long binaryToDecimal(string s) {
    long long res = 0, temp = 1;
    int len = s.length();
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] == '1') res += temp;
        temp *= 2;
    }
    return res;
}

int main() {
    int t;
    string s1, s2;
    cin >> t;
    while (t--) {
        cin >> s1 >> s2;
        cout << binaryToDecimal(s1) * binaryToDecimal(s2) << endl;
    }
    return 0;
}