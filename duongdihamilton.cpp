//
// Created by ASUS on 13/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
vector<int> vt[1001];
int mark[1001], n;

int DFS (int u, int cnt) {
    if (cnt == n) return 1;
    mark[u] = 1;
    for (int j = 0; j < vt[u].size(); j++) {
        int v = vt[u][j];
        if (!mark[v]) {
            if (DFS(v, cnt+1)) return 1;
        }
    }
    mark[u] = 0;
    return 0;
}

int main() {
    int t, e;
    cin >> t;
    while (t--) {
        for(int i = 0; i < 1002; i++) vt[i].clear();
        cin >> n >> e;
        for (int i = 1; i <= e; i++) {
            int x, y;
            cin >> x >> y;
            vt[x].push_back(y);
            vt[y].push_back(x);
        }
        int kt = 0;
        for(int i = 1; i <= n; i++){
            memset(mark,0,sizeof(mark));
            if(DFS(i,1)){
                kt = 1;
                break;
            }
        }
        if(kt) cout<<1;
        else cout<<0;
        cout << endl;
    }
    return 0;
}