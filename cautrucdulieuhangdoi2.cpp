//
// Created by ASUS on 27/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    queue<int> q;
    string s;
    while (t--) {
        cin >> s;
        if (s == "PUSH") {
            int n;
            cin >> n;
            q.push(n);
        }
        else if (s == "PRINTFRONT") {
            if (!q.empty()) cout << q.front() << endl;
            else cout << "NONE";
            cout << endl;
        }
        else {
            if (!q.empty()) q.pop();
        }
    }
    return 0;
}