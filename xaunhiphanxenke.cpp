//
// Created by ASUS on 02/06/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << i % 2 << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << (i+1) % 2 << " ";
    }
    return 0;
}