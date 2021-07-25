//
// Created by ASUS on 28/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1005];
int mark[1005];

void DFS (int u, int v, int cnt) {
    if (u == v) {
        cout << cnt << endl;
        return;
    }
    mark[u] = 1;
    for (int t : vt[u]) {
        if (!mark[t]) {
            mark[t] = 1;
            DFS(t, v, cnt+1);
        }
    }
}

int main() {
    int t, n, u, v, Q;
    cin >> t;
    while (t--) {
        for (int i = 1; i < 1005; i++) vt[i].clear();
        cin >> n;
        for (int i = 0; i < n - 1; i++) {
            cin >> u >> v;
            vt[u].push_back(v);
            vt[v].push_back(u);
        }
        cin >> Q;
        for (int i = 0; i < Q; i++) {
            cin >> u >> v;
            memset(mark, 0, sizeof(mark));
            DFS(u, v, 0);
        }
    }
    return 0;
}