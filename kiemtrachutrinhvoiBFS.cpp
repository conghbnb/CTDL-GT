//
// Created by ASUS on 14/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1001];
int v, mark[1001];

int cycleBFS (int u) {
    vector<int> parent(1001, -1);
    queue<int> q;
    q.push(u);
    mark[u] = 1;
    while (!q.empty()) {
        int t = q.front(); q.pop();
        for (int x : vt[t]) {
            if (!mark[x]) {
                q.push(x);
                mark[x] = 1;
                parent[x] = t;
            }
            else if (parent[t] != x) return 1;
        }
    }
    return 0;
}

string solve () {
    memset(mark, 0, sizeof(mark));
    for (int u = 1; u <= v; u++) {
        if (!mark[u] && cycleBFS(u)) return "YES";
    }
    return "NO";
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
        cout << solve() << endl;
    }
    return 0;
}