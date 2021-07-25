//
// Created by ASUS on 10/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1001];
int mark[1001];

void DFS (int u) {
    cout << u << " ";
    mark[u] = 1;
    for (int i = 0; i < vt[u].size(); i++) {
        int v = vt[u][i];
        if (!mark[v]) DFS(v);
    }
}

int main() {
    int t, v, e, u, n, m;
    cin >> t;
    while (t--) {
        memset(mark, 0, sizeof(mark));
        for (int i = 1; i <= 1001; i++) vt[i].clear();
        cin >> v >> e >> u;
        for (int i = 1; i <= e; i++) {
            cin >> m >> n;
            vt[m].push_back(n);
            vt[n].push_back(m);
        }
        DFS(u);
        cout << endl;
    }
    return 0;
}