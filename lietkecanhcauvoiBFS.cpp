//
// Created by ASUS on 10/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1001];
int mark[1001], low[1001], num[1001], cnt;

void DFS (int u, int p) {
    low[u] = num[u] = cnt++;
    for (int i : vt[u]) {
        if (num[i] == -1) {
            DFS(i, u);
            if (low[i] > num[u]) cout << u << " " << i << " ";
            low[u] = min(low[u], low[i]);
        }
        else if (i != p) low[u] = min(low[u], low[i]);
    }

}

int main() {
    int t, v, e, m, n;
    cin >> t;
    while (t--) {
        cnt = 0;
        memset(low, 0, sizeof(low));
        memset(num, -1, sizeof(num));
        cin >> v >> e;
        for (int i = 1; i <= e; i++) {
            cin >> m >> n;
            vt[m].push_back(n);
            vt[n].push_back(m);
        }
        for (int u = 1; u <= v; u++) DFS(u, u);
        cout << endl;
    }
    return 0;
}