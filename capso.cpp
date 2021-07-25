//
// Created by ASUS on 07/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n+1], b[n+1], f[101], res = 1;
        for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
        bool haveSwap = false;
        for (int i = 0; i < n-1; i++){
            haveSwap = false;
            for (int j = 0; j < n-i-1; j++) {
                if (a[j] > a[j+1]) {
                    swap(a[j], a[j+1]);
                    swap(b[j], b[j+1]);
                    haveSwap = true;
                }
            }
            if(haveSwap == false) break;
        }
        for(int i = 0; i < n; i++) f[i] = 1;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (b[j] < a[i]) f[i] = max(f[i], f[j] + 1);
            }
            res = max(res, f[i]);
        }
        cout << res << endl;
    }
    return 0;
}