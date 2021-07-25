//
// Created by ASUS on 28/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1005];
int mark[1005], e[1005], n;

void BFS (int u) {
    mark[u] = 1;
    queue<int> q;
    q.push(u);
    while (!q.empty()) {
        int t = q.front(); q.pop();
        for (int v : vt[t]) {
            if (!mark[v]) {
                mark[v] = 1;
                q.push(v);
                e[v] = t;
            }
        }
    }
        for (int i = 2; i <= n; i++) {
            if (vt[i].empty()) {
                int t = i;
                stack<int> stk;
                while (t != 1) {
                    stk.push(t);
                    t = e[t];
                }
                cout << u << " ";
                while (!stk.empty()) {
                    cout << stk.top() << " ";
                    stk.pop();
                }
                cout << endl;
            }
        }
}

int main() {
    int t, u, v;
    cin >> t;
    while (t--) {
        for (int i = 1; i < 1005; i++) vt[i].clear();
        memset(mark, 0, sizeof(mark));
        cin >> n;
        for (int i = 0; i < n - 1; i++) {
            cin >> u >> v;
            vt[u].push_back(v);
        }
        BFS(1);
    }
    return 0;
}