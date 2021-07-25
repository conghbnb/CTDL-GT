//
// Created by ASUS on 09/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

bool col[10] = {false}, row[10] = {false}, nguoc[100] = {false}, xuoi[100] = {false};
int n, ans = 0;

void Try (int i) {
    for (int j = 1; j <= n; j++) {
        if (!row[j] && !col[j] && !nguoc[i+j-1] && !xuoi[i-j+n]) {
            row[j] = col[j] = nguoc[i+j-1] = xuoi[i-j+n] = true;
            if (i == n) ans++;
            else Try(i+1);
            row[j] = col[j] = nguoc[i+j-1] = xuoi[i-j+n] = false;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        Try(1);
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}