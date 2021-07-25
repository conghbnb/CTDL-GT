//
// Created by ASUS on 28/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, n1, n2;
    int a[1000000];
    cin >> t;
    while (t--) {
        cin >> n;
        priority_queue<long, vector<long>, greater<long>> q;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            q.push(a[i]);
        }
        long s = 0;
        while (q.size() > 1) {
            n1 = q.top(); q.pop();
            n2 = q.top(); q.pop();
            s += n1 + n2;
            q.push(n1 + n2);
        }
        cout << s << endl;
    }
    return 0;
}