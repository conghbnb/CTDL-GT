//
// Created by ASUS on 09/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
int n, X[10] = {0}, k, sum = 0;

void in (int n) {
    cout << "(";
    for (int i = 0; i < n; i++) cout << X[i] << " ";
    cout << X[n] << ") ";
}

void Try (int i) {
    for (int j = k; j > 0; j--) {
        X[i] = j; k = j;
        sum += j;
        if (sum == n) in(i);
        else if (sum < n) Try(i+1);
        sum -= j;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        k = n;
        Try(0);
        cout << endl;
    }
    return 0;
}