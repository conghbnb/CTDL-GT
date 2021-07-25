//
// Created by ASUS on 01/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, S[1001], F[1001];
    cin >> t;
    while (t--) {
        cin >> n;
        int count = 1;
        for (int i = 0; i < n; i++) cin >> S[i];
        for (int i = 0; i < n; i++) cin >> F[i];
        bool haveSwap = false;
        for (int i = 0; i < n-1; i++){
            haveSwap = false;
            for (int j = 0; j < n-i-1; j++){
                if (F[j] > F[j+1]){
                    swap(F[j], F[j+1]);
                    swap(S[j], S[j+1]);
                    haveSwap = true;
                }
            }
            if(!haveSwap) break;
        }
        int end = F[0];
        for (int i = 1; i < n; i++) {
            if (S[i] >= end) {
                count++;
                end = F[i];
            }
        }
        cout << count << endl;

    }
    return 0;
}