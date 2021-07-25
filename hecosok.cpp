//
// Created by ASUS on 23/03/2021.
//

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, k;
    string a, b;
    cin >> t;
    while (t--) {
        cin >> k >> a >> b;
        int len_a = a.length(), len_b = b.length();
        string s = "", sum = "";
        for (int i = 0; i < abs(len_a - len_b); i++) s += "0";
        if (len_a > len_b) b = s + b;
        else a = s + a;
        int curr = 0, carry = 0;
        for (int i = a.length() - 1; i >= 0; i--) {
            curr = (a[i] - '0') + (b[i] - '0') + carry;
            carry = curr / k;
            curr %= k;
            sum = (char)(curr + '0') + sum;
        }
        if (carry > 0) sum = (char)(carry + '0')  + sum;
        cout << sum << endl;
    }
    return 0;
}