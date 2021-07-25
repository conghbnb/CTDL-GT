//
// Created by ASUS on 10/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a[101];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_index]) min_index = j;
        }
        swap(a[i], a[min_index]);
        cout << "Buoc " << i + 1 << ": ";
        for (int j = 0; j < n; j++) cout << a[j] << " ";
        cout << endl;
    }
    return 0;
}