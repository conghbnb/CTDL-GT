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
    BFS(u);
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
        pathBFS(u, t);
        cout << endl;
    }
    return 0;
}