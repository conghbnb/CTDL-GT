//
// Created by ASUS on 01/04/2021.
//

#include<bits/stdc++.h>
using namespace std;
int a[11], mark[11], n;

void Try(int i) {
    for (int j = 1; j <= n; j++) {
        if (mark[j]) {
            a[i] = j;
            mark[j] = 0;
            mark[j+1] = 0;
            mark[j-1] = 0;
            if (i == n-1) {
                for (int i = 0; i < n; i++) cout << a[i];
                cout << endl;
            }
            else Try(i+1);
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        for (int i = 0; i < 11; i++) mark[i] = 1;
        cin >> n;
        Try(0);
    }
    return 0;
}