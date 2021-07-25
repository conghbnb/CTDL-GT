//
// Created by ASUS on 13/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1001];
int mark[1001], e[1001];

void BFS (int u) {
    queue<int> q;
    q.push(u);
    mark[u] = 1;
    while (!q.empty()) {
        int t = q.front(); q.pop();
        for (int i = 0; i < vt[t].size(); i++) {
            int x = vt[t][i];
            if (!mark[x]) {
                e[x] = t;
                q.push(x);
                mark[x] = 1;
            }
        }
    }
}


void pathBFS (int u, int v) {
    memset(mark, 0, sizeof(mark));
    memset(e, 0, sizeof(e));
    BFS(u);
    if (mark[v]) cout << "YES";
    else cout << "NO";
    cout << endl;
}

int main() {
    int t, m, n, e1, v, q, x, y;
    cin >> t;
    while (t--) {
        for (int i = 1; i <= 1001; i++) vt[i].clear();
        cin >> v >> e1;
        for (int i = 1; i <= e1; i++) {
            cin >> m >> n;
            vt[m].push_back(n);
            vt[n].push_back(m);
        }
        cin >> q;
        for (int i = 0; i < q; i++) {
            cin >> x >> y;
            pathBFS(x, y);
        }
        cout << endl;
    }
    return 0;
}