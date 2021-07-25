//
// Created by ASUS on 01/06/2021.
//

#include <bits/stdc++.h>
using namespace std;
int A[30], X[30], n, k, sum = 0;
vector<vector<int>> res;

void in () {
    for(int i = res.size()-1; i >= 0; i--){
        for(int j = 0; j < res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    cout << res.size();
}

void Try (int i, int m) {
    for (int j = m; j < n; j++) {
        X[i] = A[j];
        sum += A[j];
        if (sum == k) {
            vector<int> vt;
            for (int p = 1; p <= i; p++) vt.push_back(X[p]);
            res.push_back(vt);
        }
        else Try(i+1, j + 1);
        sum -= A[j];
    }
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> A[i];
    Try(1, 0);
    in();
    return 0;
}