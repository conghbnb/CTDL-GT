////
//// Created by ASUS on 05/04/2021.
////
//
////- liet ke, dem, toi uu, ton tai
////
////dk1 : - cau hinh dau tien 000
////      - cau hinh cuoi 111
////      - thu tu cau hinh can liet ke 011 (3)
////
////
////      dk2 : tu cau hinh chua phai cuoi cung, xay dung dc cau hinh tiep theo 001
////
////      B1: khoi tao cau hinh dau tien  000 1234
////      B2: buoc lap
////          while (ok) {
////              <in ra cau hinh hien tai>
////              <sinh ra cau hinh ke tiep>
////          }
//
////tap con k ptu cua 1,2,3,4,5         1, 2, 3     3, 4 , 5     x[1] = 3 = n - k + i = 5 - 3 + 1
////- x1, x2, x3... xk   xk < yk        1, 2, 4                        x[i] != n - k + i
////- y1, y2, y3... yk                  1, 2, 5
////                                    1, 3, 4        x[i]++; x[j] = x[i] + j - i
//
//
////sinh hoan vi 1,2,3,4,5          12354     54321          n - 1: x[i] < x[i+1]
////                                                         n    : k : x[i] < x[k]
////                                                         i + 1 -> n: dao nguoc thu tu ptu
//void Next () {
//    int i = n - 1;
//    while (i > 0 && X[i] > X[i+1]) i--;
//    if (i > 0) {
//        int k = n;
//        while (i > 0 && X[i] > X[k]) k--;
//        swap(X[i], X[k]);
//        int l = i + 1, r = n;
//        while (l <= r) {
//            swap(X[l], X[r]);
//            l++; r--;
//        }
//    }
//    else OK = 0;
//}
//
//#include<bits/stdc++.h>
//using namespace std;
//
//int main() {
//    Init();
//    OK = 1;
//    while (OK) {
//        Print();
//        Next();
//    }
//    return 0;
//}


//
// Created by ASUS on 13/03/2021.
//

#include<bits/stdc++.h>
using namespace std;
int a[10][10], n, ok;
string s;
void Try (int i, int j, string s) {
    if (!a[0][0] || !a[n-1][n-1]) return;
    if (i == n - 1 && j == i) {
        cout << s << " ";
        ok = 1;
    }
    if (i < n-1 && a[i + 1][j])
        Try(i + 1, j, s + "D");
    if (j < n-1 && a[i][j + 1])
        Try(i, j + 1, s + "R");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        ok = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        Try(0, 0, "");
        if (!ok) cout << -1;
        cout << endl;
    }
    return 0;
}