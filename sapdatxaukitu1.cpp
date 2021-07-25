//
// Created by ASUS on 30/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        int max = 1, len = s.length();
        for (int i = 0; i < len; i++) {
            int count = 1;
            for (int j = i + 1; j < len; j++) {
                if (s[i] == s[j]) {
                    count++;
                    if (count > max) max = count;
                }
            }
        }
        if (len % 2 != 0 && len - max + 1 >= max) cout << 1;
        else if(len % 2 == 0 && len - max >= max) cout << 1;
        else cout << -1;
        cout << endl;
    }
    return 0;
}