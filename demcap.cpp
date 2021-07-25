//
// Created by ASUS on 02/06/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int a1[n+11], a2[m+1], ans;
        for (int i = 0; i < n; i++) cin >> a1[i];
        for (int i = 0; i < m; i++) cin >> a2[i];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (pow(a1[i], a2[j]) > pow(a2[j], a1[i]))
                    ans++;
        cout << ans << endl;
    }
    return 0;
}