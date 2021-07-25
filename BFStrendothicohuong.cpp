//
// Created by ASUS on 13/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1001];
int v, mark[1001] = {0};

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
                cout << x << " ";
                q.push(x);
                mark[x] = 1;
            }
        }
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
        BFS(u);
        cout << endl;
    }
    return 0;
}