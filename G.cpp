#include<bits/stdc++.h>

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void bubbleSort(int arr[], int n) {
    int i, j;
    bool haveSwap = false;
    for (i = 0; i < n-1; i++){
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                haveSwap = true;
            }
        }
        if(!haveSwap) break;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n+1], b[n+1];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }
        bubbleSort(b, n);
        for (int i = 0; i < n; i++) {
            if (a[i] == b[n-1]) {
                printf("%d ", i+1);
            }
        }
    }
    return 0;
}