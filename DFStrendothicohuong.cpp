//
// Created by ASUS on 13/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1001];
int v, mark[1001] = {0};

void DFS (int u) {
    cout << u << " ";
    mark[u] = 1;
    for (int j = 0; j < vt[u].size(); j++) {
        int t = vt[u][j];
        if (!mark[t]) DFS(t);
    }
}

int main() {
    int t, e, u, m, n;
    cin >> t;
    while (t--) {
        for (int i = 1; i <= 1001; i++) vt[i].clear();
        memset(mark, 0, sizeof(mark));
        cin >> v >> e >> u;
        for (int i = 1; i <= e; i++) {
            cin >> m >> n;
            vt[m].push_back(n);
        }
        DFS(u);
        cout << endl;
    }
    return 0;
}