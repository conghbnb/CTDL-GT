//
// Created by ASUS on 08/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

void stringAB (int n) {
    string s;
    int flag = 1;
    for (int i = 0; i < n; i++) s += 'A';
    while (flag) {
        int i = n-1;
        cout << s << " ";
        while (i >= 0 && s[i] != 'A') {
            s[i] = 'A';
            i--;
        }
        if (i >= 0) s[i] = 'B';
        else flag = 0;
    }
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        stringAB(n);
        cout << endl;
    }
    return 0;
}