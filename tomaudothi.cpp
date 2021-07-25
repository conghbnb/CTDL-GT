//
// Created by ASUS on 13/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
int n, a[11][11],sm,m[11];

void xuly(){
    int kt;
    for(int i=1;i<=n;i++)
        if(!m[i]) {
            sm++;
            m[i]=sm;
            for(int j=i+1;j<=n;j++)
                if((a[i][j]==0)&&(m[j]==0)){
                    kt=1;
                    for(int k=i+1;k<j;k++)
                        if((a[k][j]==1)&&(m[i]==m[k])){
                            kt=0;
                            break;
                        }
                    if(kt==1) m[j]=sm;
                }
        }
}

int main() {
    int t, e, m1;
    cin >> t;
    while (t--) {
        sm = 0;
        cin >> n >> e >> m1;
        memset(a, 0, sizeof(a));
        memset(m, 0, sizeof(m));
        for (int i = 1; i <= e; i++) {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
            a[y][x] = 1;
        }
        xuly();
        if (sm <= m1) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}