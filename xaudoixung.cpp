//
// Created by ASUS on 09/05/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        int k = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == s[i+1]) k++;
        }
    }
    return 0;
}