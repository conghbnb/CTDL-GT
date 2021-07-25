//
// Created by ASUS on 11/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int mark[10] = {0}, a;
        for (int i = 0; i < n; i++) {
            cin >> a;
            while (a > 0) {
                mark[a%10] = 1;
                a /= 10;
            }
        }
        for (int i = 0; i < 10; i++) {
            if (mark[i]) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}