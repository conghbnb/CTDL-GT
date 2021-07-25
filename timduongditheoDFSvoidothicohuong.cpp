//
// Created by ASUS on 13/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1001];
int mark[1001], e[1001];

void DFS (int u) {
    mark[u] = 1;
    for (int j = 0; j < vt[u].size(); j++) {
        int t = vt[u][j];
        if (!mark[t]) {
            e[t] = u;
            DFS(t);
        }
    }
}

void pathDFS (int u, int v) {
    DFS(u);
    stack<int> stk;
    if (mark[v]) {
        int t = v;
        while (t > 0) {
            stk.push(t);
            t = e[t];
        }
        while (!stk.empty()) {
            cout << stk.top() << " ";
            stk.pop();
        }
    }
    else cout << -1;
}

int main() {
    int t, t1, v, e1, u, m, n;
    cin >> t1;
    while (t1--) {
        for (int i = 1; i <= 1001; i++) vt[i].clear();
        memset(mark, 0, sizeof(mark));
        memset(e, 0, sizeof(e));
        cin >> v >> e1 >> u >> t;
        for (int i = 1; i <= e1; i++) {
            cin >> m >> n;
            vt[m].push_back(n);
            //vt[n].push_back(m);
        }
        pathDFS(u, t);
        cout << endl;
    }
    return 0;
}