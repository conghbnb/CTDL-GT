//
// Created by ASUS on 26/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> stk;
    string s;
    int n;
    while(cin >> s) {
        if (s[1] == 'u') {
            cin >> n;
            stk.push(n);
        }
        else if (s[1] == 'o') stk.pop();
        else {
            vector<int> a;
            if (!stk.empty()) {
                while (!stk.empty()) {
                    a.push_back(stk.top());
                    stk.pop();
                }
                reverse(a.begin(), a.end());
                for (int i = 0; i < a.size(); i++) {
                    cout << a[i] << " ";
                    stk.push(a[i]);
                }
            }
            else cout << "empty";
            cout << endl;
        }
    }
    return 0;
}