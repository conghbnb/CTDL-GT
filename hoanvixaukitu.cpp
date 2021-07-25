//
// Created by ASUS on 13/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        do {
            cout << s << " ";
        } while ( next_permutation(s.begin(), s.end()));
        cout << endl;
    }
    return 0;
}