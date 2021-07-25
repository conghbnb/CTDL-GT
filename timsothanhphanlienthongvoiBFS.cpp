//
// Created by ASUS on 14/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1001];
int mark[1001], v;

void BFS (int u) {
    queue<int> q;
    q.push(u);
    mark[u] = 1;
    while (!q.empty()) {
        int t = q.front(); q.pop();
        for (int i = 0; i < vt[t].size(); i++) {
            int x = vt[t][i];
            if (!mark[x]) {
                q.push(x);
                mark[x] = 1;
            }
        }
    }
}

int tpltBFS () {
    int k = 0;
    memset(mark, 0, sizeof(mark));
    for (int u = 1; u <= v; u++) {
        if (!mark[u]) {
            k++;
            BFS(u);
        }
    }
    return k;
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
        cout << tpltBFS() << endl;
    }
    return 0;
}