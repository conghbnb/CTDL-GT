//
// Created by ASUS on 09/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

bool col[10] = {false}, row[10] = {false}, nguoc[100] = {false}, xuoi[100] = {false};
int sum, a[9][9], max1;

void Try (int i) {
    for (int j = 1; j <= 8; j++) {
        if (!row[j] && !col[j] && !nguoc[i+j-1] && !xuoi[i-j+8]) {
            row[j] = col[j] = nguoc[i+j-1] = xuoi[i-j+8] = true;
            sum += a[i][j];
            if (i == 8 && sum > max1) max1 = sum;
            if (i < 8) Try(i+1);
            sum -= a[i][j];
            row[j] = col[j] = nguoc[i+j-1] = xuoi[i-j+8] = false;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        sum = 0, max1 = 0;
        for (int i = 1; i <= 8; i++) {
            for (int j = 1; j <= 8; j++) {
                cin >> a[i][j];
            }
        }
        Try(1);
        cout << max1 << endl;
    }
    return 0;
}