//
// Created by ASUS on 14/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1001];
int v;

int isEuler () {
    int cnt1 = 0, cnt2 = 0;
    for (int i = 1; i <= v; i++) {
        if (vt[i].size() % 2 == 0) cnt1++;
        else cnt2++;
    }
    if (cnt1 == v) return 2;
    if (cnt2 == 2) return 1;
    return 0;
}

int main() {
    int t, a, b, e;
    cin >> t;
    while (t--) {
        for (int i = 0; i <= 1001; i++) vt[i].clear();
        cin >> v >> e;
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            vt[a].push_back(b);
            vt[b].push_back(a);
        }
        cout << isEuler() << endl;
    }
    return 0;
}