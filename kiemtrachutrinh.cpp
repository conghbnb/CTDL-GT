//
// Created by ASUS on 14/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1001];
int V, mark[1001];
string isCycle;

void DFS (int u, int parent) {
    mark[u] = 1;
    for (int v : vt[u]) {
        if (!mark[v]) DFS(v, u);
        else if (v != parent) {
            isCycle = "YES";
            return;
        }
    }
}

void solve () {
    for (int i = 1; i <= V; i++) {
        if (!mark[i]) DFS(i, -1);
        if (isCycle == "YES") return;
    }
}

int main() {
    int t, a, b, e;
    cin >> t;
    while (t--) {
        memset(mark, 0, sizeof(mark));
        isCycle = "NO";
        for (int i = 0; i <= 1001; i++) vt[i].clear();
        cin >> V >> e;
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            vt[a].push_back(b);
            vt[b].push_back(a);
        }
        solve();
        cout << isCycle << endl;
    }
    return 0;
}