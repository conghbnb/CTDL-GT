//
// Created by ASUS on 10/05/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, v, e, m, n;
    cin >> t;
    while (t--) {
        cin >> v >> e;
        vector<int> vt[v+1];
        for (int i = 1; i <= e; i++) {
            cin >> m >> n;
            vt[m].push_back(n);
        }
        for (int i = 1; i <= v; i++) {
            cout << i << ": ";
            for (int j = 0; j < vt[i].size(); j++) {
                cout << vt[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}