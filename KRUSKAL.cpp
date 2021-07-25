//
// Created by ASUS on 19/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
int parent[1001], V, e, res;

struct Edge {
    int u, v, weight;
};

Edge edge[10001];

void MakeSet(int x) {
    parent[x] = x;
}

int Find (int x) {
    while (x != parent[x]) x = parent[x];
    return x;
}

void Union (int x, int y) {
    int u = Find(x);
    int v = Find(y);
    parent[u] = v;
}

void sort() {
    for (int i = 0; i < e; i++) {
        for (int j = e - 1; j > i; j--) {
            if (edge[j-1].weight > edge[j].weight) {
                Edge tp = edge[j-1];
                edge[j-1] = edge[j];
                edge[j] = tp;
            }
        }
    }
}

void Kruskal () {
    for (int i = 1; i <= V; i++) MakeSet(i);
    sort();
    res = 0;
    for (int i = 0; i < e; i++) {
        int u = Find(edge[i].u);
        int v = Find(edge[i].v);
        if (u != v) {
            res += edge[i].weight;
            Union(u, v);
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> V >> e;
        for (int i = 0; i < e; i++) {
            cin >> edge[i].u >> edge[i].v >> edge[i].weight;
        }
        Kruskal();
        cout << res << endl;
    }
    return 0;
}