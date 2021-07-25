//
// Created by ASUS on 01/04/2021.
//

#include<bits/stdc++.h>
using namespace std;
int n, X[12], count1;

void in() {
    for (int i = 0; i < n; i++) cout << X[i];
    cout << " ";
}

void Try(int i) {
    for (int j = 6; j <= 8; j += 2) {
        X[i] = j;
        if (i == n - 1) in();
        else Try(i+1);
    }
}

void Try1(int i) {
    for (int j = 6; j <= 8; j += 2) {
        X[i] = j;
        if (i == n - 1) count1++;
        else Try1(i+1);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        count1 = 0;
        cin >> n;
        Try1(0);
        cout << count1 << endl;
        Try(0);
        cout << endl;
    }
    return 0;
}