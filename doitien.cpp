//
// Created by ASUS on 26/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000}, n;
    cin >> t;
    while (t--) {
        int count = 0;
        cin >> n;
        for (int i = 9; i >= 0; i--) {
            if (n == 0) break;
            while (n > 0 && n >= a[i]) {
                n -= a[i];
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}