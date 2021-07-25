//
// Created by ASUS on 14/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1001];
int v, mark[1001], k;
vector<int> res;

void BFS (int u) {
    queue<int> q;
    q.push(u);
    mark[u] = 1;
    while (!q.empty()) {
        int t = q.front(); q.pop();
        for (int x : vt[t]) {
            if (!mark[x]) {
                k++;
                res.push_back(t);
                res.push_back(x);
                q.push(x);
                mark[x] = 1;
            }
        }
    }
}

void solve (int u) {
    BFS(u);
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