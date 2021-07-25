//
// Created by ASUS on 01/04/2021.
//

#include<bits/stdc++.h>
using namespace std;
string s, s1;
int mark[17], d;

void Try(int i, int d) {
    if (i == s.length()) return;
    for (int j = d; j < s.length(); j++) {
        if (mark[j]) {
            s1[i] = s[j];
            mark[j] = 0;
            for (int k1 = 0; k1 <= i; k1++) cout << s1[k1];
            cout << " ";
            Try(i+1, j);
            mark[j] = 1;
        }
    }
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        d = 0;
        for (int i = 0; i < 17; i++) mark[i] = 1;
        cin >> n >>  s;
        s1 = s;
        Try(0, 0);
        cout << endl;
    }
    return 0;
}