//
// Created by ASUS on 09/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
int n, mark[26] = {0};
char X[13];

void Try1 (int i1) {
    for (int j1 = 1; j1 <= n; j1++) {
        X[i1] = '0' + j1;
        if (i1 == 2*n) {
            for (int k = 1; k <= 2*n; k++) cout << X[k];
            cout << endl;
        }
        else Try1(i1+1);
    }
}

void Try (int i) {
    for (int j = 1; j <= n; j++) {
        if (!mark[j]) {
            X[i] = 'A' + j - 1;
            mark[j] = 1;
            if (i == n) Try1(i+1);
            else Try(i+1);
            mark[j] = 0;
        }
    }
}

int main() {
    cin >> n;
    Try(1);
    return 0;
}