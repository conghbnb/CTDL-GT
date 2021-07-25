//
// Created by ASUS on 13/05/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> vt[1001];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> m;
            if (m) vt[i].push_back(j);
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < vt[i].size(); j++) {
            cout << vt[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}