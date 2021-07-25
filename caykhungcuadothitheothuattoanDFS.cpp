//
// Created by ASUS on 14/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1001];
int v, mark[1001], k;
vector<int> res;

void DFS (int u) {
    mark[u] = 1;
    for (int v1 : vt[u]) {
        if (!mark[v1]) {
            k++;
            res.push_back(u);
            res.push_back(v1);
            DFS(v1);
        }
    }
}

void solve (int u) {
    DFS(u);
    if (k < v - 1) cout << -1 << endl;
    else {
        for (int i = 0; i < res.size(); i += 2) {
            cout << res[i] << " " << res[i+1] << endl;
        }
    }
}

int main() {
    int t, a, b, e, u;
    cin >> t;
    while (t--) {
        k = 0;
        memset(mark, 0, sizeof(mark));
        for (int i = 0; i <= 1001; i++) vt[i].clear();
        res.clear();
        cin >> v >> e >> u;
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            vt[a].push_back(b);
            vt[b].push_back(a);
        }
        solve(u);
    }
    return 0;
}