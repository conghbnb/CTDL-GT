#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    cin.ignore();
    while (t--) {
        getline(cin, s);
        int cnt1 = 0;
        stack<int> stk;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                cout << ++cnt1 << " ";
                stk.push(cnt1);
            }
            if (s[i] == ')') {
                cout << stk.top() << " ";
                stk.pop();
            }
        }
        cout << endl;
    }
    return 0;
}