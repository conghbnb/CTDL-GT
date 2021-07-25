//
// Created by ASUS on 10/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a[101];
    bool haveSwap;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) {
        haveSwap = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j+1]) {
                swap(a[j+1], a[j]);
                haveSwap = true;
            }
        }
        if (!haveSwap) break;
        cout << "Buoc " << i + 1 << ": ";
        for (int j = 0; j < n; j++) cout << a[j] << " ";
        cout << endl;
    }
    return 0;
}