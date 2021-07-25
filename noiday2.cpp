//
// Created by ASUS on 28/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
const long long M = 1000000007;
int main() {
    int t, n, n1, n2;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n+1];
        priority_queue<long, vector<long>, greater<long>> q;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            q.push(a[i]);
        }
        long s = 0;
        while (q.size() > 1) {
            n1 = q.top(); q.pop();
            n2 = q.top(); q.pop();
            long long tp = (n1 + n2) % M;
            s = (s + tp) % M;
            q.push(tp);
        }
        cout << s << endl;
    }
    return 0;
}