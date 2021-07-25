//
// Created by ASUS on 05/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, J[1001], P[1001], D[1001];
    cin >> t;
    while (t--) {
        int mark[1001] = {0};
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> J[i] >> D[i] >> P[i];
        bool haveSwap = false;
        for (int i = 0; i < n-1; i++){
            haveSwap = false;
            for (int j = 0; j < n-i-1; j++){
                if (P[j] < P[j+1]){
                    swap(P[j], P[j+1]);
                    swap(D[j], D[j+1]);
                    haveSwap = true;
                }
            }
            if(!haveSwap) break;
        }
        int s = 0, count = 0;
        for (int i = 0; i < n; i++) {
            int flag = 0;
            for (int j = D[i]; j >= 1; j--) {
                if (!mark[j]) {
                    flag = j;
                    break;
                }
            }
            if (flag != 0) {
                s += P[i];
                count++;
                mark[flag] = 1;
            }
        }
        cout << count << " " << s << endl;
    }
    return 0;
}