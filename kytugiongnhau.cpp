//
// Created by ASUS on 08/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x, y, z;
    cin >> t;
    while (t--) {
        cin >> n >> x >> y >> z;
        int f[n+5];
        memset(f, 0, sizeof(f));
        f[1] = x;
        for(int i=2;i<=n;i++){
            if(i%2==0)
                f[i] = min(f[i-1] + x, f[i/2] + z);
            else
                f[i] = min(f[i-1] + x, f[(i+1)/2] + z + y);
        }
        cout << f[n] << endl;
    }
    return 0;
}