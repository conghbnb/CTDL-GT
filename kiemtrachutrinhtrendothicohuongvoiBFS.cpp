//
// Created by ASUS on 14/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1001];
int V;

string isCycle() {
    vector<int> in_degree(V+1, 0);
    for (int u = 1; u <= V; u++) {
        for (auto v : vt[u])
            in_degree[v]++;
    }

    queue<int> q;
    for (int i = 1; i <= V; i++)
        if (in_degree[i] == 0)
            q.push(i);

    int cnt = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int t : vt[u])
            if (--in_degree[t] == 0) q.push(t);

        cnt++;
    }

    if (cnt != V) return "YES";
    return "NO";
}

int main() {
    int t, a, b, e;
    cin >> t;
    while (t--) {
        for (int i = 0; i <= 1001; i++) vt[i].clear();
        cin >> V >> e;
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            vt[a].push_back(b);
        }
        cout << isCycle() << endl;
    }
    return 0;
}