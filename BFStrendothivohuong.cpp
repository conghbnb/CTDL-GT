//
// Created by ASUS on 10/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1001];
int mark[1001];

void BFS (int u) {
    queue<int> q;
    q.push(u);
    cout << u << " ";
    mark[u] = 1;
    while (!q.empty()) {
        int t = q.front(); q.pop();
        for (int i = 0; i < vt[t].size(); i++) {
            int x = vt[t][i];
            if (!mark[x]) {
                q.push(x);
                mark[x] = 1;
                cout << x << " ";
            }
        }
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
        BFS(u);
        cout << endl;
    }
    return 0;
}