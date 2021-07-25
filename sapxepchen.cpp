//
// Created by ASUS on 10/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a[101];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int t,j;
    for(int i=1;i<=n;i++)
    {
        cout << "Buoc " << i - 1 << ": ";
        for (int k = 0; k < i; k++) cout << a[k] << " ";
        cout << endl;
        if (i == n) break;
        j=i-1;
        t=a[i];
        while(j >= 0 && t < a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    }
    return 0;
}