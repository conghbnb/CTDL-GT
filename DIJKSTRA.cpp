//
// Created by ASUS on 18/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> II;
int d[1001], V;
vector<II> vt[1001];
priority_queue<II, vector<II>, greater<II>> Q;

void DIJKSTRA (int start) {
    for (int i = 1; i <= V; i++) d[i] = INT16_MAX;
    while (!Q.empty()) Q.pop();
    Q.push({0, start});
    d[start] = 0;
    while (!Q.empty()) {
        int u = Q.top().second; Q.pop();
        for (II v : vt[u]) {
            if (d[u] + v.first < d[v.second]) {
                d[v.second] = d[u] + v.first;
                Q.push({d[v.second], v.second});
            }
        }
    }
    for (int i = 1; i <= V; i++) cout << d[i] << " ";
    cout << endl;
}

int main() {
    int t, e, u;
    cin >> t;
    while (t--) {
        cin >> V >> e >> u;
        for (int i = 1; i <= 1001; i++) vt[i].clear();
        for (int i = 1; i <= e; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            vt[a].push_back({c, b});
            vt[b].push_back({c, a});
        }
        DIJKSTRA(u);
    }
    return 0;
}