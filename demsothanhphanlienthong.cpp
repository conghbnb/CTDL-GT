//
// Created by ASUS on 14/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1001];
int mark[1001], v;

void DFS (int u) {
    mark[u] = 1;
    for (int j = 0; j < ke[u].size(); j++) {
        int t = ke[u][j];
        if (!mark[t]) DFS(t);
    }
}

int tpltDFS () {
    int k = 0;
    memset(mark, 0, sizeof(mark));
    for (int u = 1; u <= v; u++) {
        if (!mark[u]) {
            k++;
            DFS(u);
        }
    }
    return k;
}

int main() {
    int t, a, b, e;
    cin >> t;
    while (t--) {
        for (int i = 0; i <= 1001; i++) ke[i].clear();
        cin >> v >> e;
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        cout << tpltDFS() << endl;
    }
    return 0;
}