//
// Created by ASUS on 07/05/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    vector<int> ke[n+1];
    cin.ignore();
    for (int i = 1; i <= n; i++) {
        string s;
        getline(cin, s);
        istringstream s_cin (s);
        while(s_cin>>a) if (i < a) ke[i].push_back(a);
    }
    for (int i = 1; i <= n; i++) {
        sort(ke[i].begin(), ke[i].end());
        for (int j = 0; j < ke[i].size(); j++) {
            cout << i << " " << ke[i][j] <<  endl;
        }
    }
    return 0;
}