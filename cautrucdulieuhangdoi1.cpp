//
// Created by ASUS on 27/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, q1;
    cin >> t;
    while (t--) {
        queue<int> q;
        cin >> n;
        while (n--) {
            cin >> q1;
            switch (q1) {
                case 1:
                    cout << q.size() << endl;
                    break;
                case 2:
                    if (q.empty()) cout << "YES";
                    else cout << "NO";
                    cout << endl;
                    break;
                case 3:
                    int n1;
                    cin >> n1;
                    q.push(n1);
                    break;
                case 4:
                    if (!q.empty()) q.pop();
                    break;
                case 5:
                    if (!q.empty()) cout << q.front();
                    else cout << - 1;
                    cout << endl;
                    break;
                case 6:
                    if (!q.empty()) cout << q.back();
                    else cout << -1;
                    cout << endl;
                    break;
            }
        }
    }
    return 0;
}