//
// Created by ASUS on 11/04/2021.
//

#include<bits/stdc++.h>
using namespace std;
int X1;

int main() {
    int t, n;
    int a[100005];
    cin >> t;
    while (t--) {
        cin >> n >> X1;
        bool haveSwap;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n - 1; i++) {
            haveSwap = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (abs(X1-a[j]) > abs(X1-a[j+1])) {
                    swap(a[j+1], a[j]);
                    haveSwap = true;
                }
            }
            if (!haveSwap) break;
        }
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}