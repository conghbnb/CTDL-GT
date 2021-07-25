//
// Created by ASUS on 14/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1001], vt1[1001];
int v;

int isEuler () {
    int cnt1 = 0;
    for (int i = 1; i <= v; i++) {
        if (vt[i].size() == vt1[i].size()) cnt1++;
    }
    if (cnt1 == v) return 1;
    return 0;
}

int main() {
    int t, a, b, e;
    cin >> t;
    while (t--) {
        for (int i = 0; i <= 1001; i++) {
            vt[i].clear();
            vt1[i].clear();
        }
        cin >> v >> e;
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            vt[a].push_back(b);
            vt1[b].push_back(a);
        }
        cout << isEuler() << endl;
    }
    return 0;
}