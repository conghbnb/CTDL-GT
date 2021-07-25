//
// Created by ASUS on 09/05/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n1, n2, n3;
    cin >> t;
    while (t--) {
        cin >> n1 >> n2 >> n3;
        int flag = 0, a = 0, b = 0, c = 0;
        long long a1[n1+1], a2[n2+2], a3[n3+3];
        for (int i = 0; i < n1; i++) cin >> a1[i];
        for (int i = 0; i < n2; i++) cin >> a2[i];
        for (int i = 0; i < n3; i++) cin >> a3[i];
        while (a < n1 && b < n2 && c < n3) {
            if (a1[a] == a2[b] && a2[b] == a3[c]) {
                cout << a1[a] << " ";
                a++;b++;c++;
                flag = 1;
            }
            else if (a2[b] > a1[a]) a++;
            else if (a3[c] > a2[b]) b++;
            else c++;
        }
        if (!flag) cout << -1;
        cout << endl;
    }
    return 0;
}