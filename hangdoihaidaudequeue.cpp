//
// Created by ASUS on 27/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    deque<int> q;
    string s;
    while (t--) {
        cin >> s;
        if (s == "PUSHFRONT") {
            int n;
            cin >> n;
            q.push_front(n);
        }
        else if (s == "PRINTFRONT") {
            if (!q.empty()) cout << q.front() << endl;
            else cout << "NONE";
            cout << endl;
        }
        else if (s == "POPFRONT"){
            if (!q.empty()) q.pop_front();
        }
        else if (s == "PUSHBACK") {
            int n;
            cin >> n;
            q.push_back(n);
        }
        else if (s == "PRINTBACK") {
            if (!q.empty()) cout << q.back() << endl;
            else cout << "NONE";
            cout << endl;
        }
        else {
            if (!q.empty()) q.pop_back();
        }
    }
    return 0;
}