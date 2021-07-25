//
// Created by ASUS on 13/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
int a[1001][1001] = {0};

int main() {
    int n, j;
    string s;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        istringstream s_cin (s);
        while(s_cin>>j) a[i][j-1] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}