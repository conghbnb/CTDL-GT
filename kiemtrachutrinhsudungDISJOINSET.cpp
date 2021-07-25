//
// Created by ASUS on 14/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
int parent[1001];

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

int main() {
    int t, v, a, b, e;
    cin >> t;
    while (t--) {
        int flag = 0;
        cin >> v >> e;
        for (int i = 1; i <= v; i++) MakeSet(i);
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            if (Find(a) != Find(b)) Union(a, b);
            else flag = 1;
        }
        if (flag) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}