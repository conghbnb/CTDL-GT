//
// Created by ASUS on 07/05/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, v, e, a, b;
    cin >> t;
    while (t--) {
        cin >> v >> e;
        vector<int> ke[v+1];
        for (int i = 0; i < e; i++) {
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        for (int i = 1; i <= v; i++) {
            sort(ke[i].begin(), ke[i].end());
        }
        for (int i = 1; i <= v; i++) {
            cout << i << ": ";
            for (int j = 0; j < ke[i].size(); j++) cout << ke[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}