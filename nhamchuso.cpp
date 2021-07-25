#include <bits/stdc++.h>
using namespace std;

long long swap65 (string s) {
    long long ans = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '6') s[i] = '5';
        ans = ans * 10 + (s[i] - '0');
    }
    return ans;
}
long long swap56 (string s) {
    long long ans = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '5') s[i] = '6';
        ans = ans * 10 + (s[i] - '0');
    }
    return ans;
}

int main() {
    string x1, x2;
    cin >> x1 >> x2;
    cout << swap65(x1) + swap65(x2) << " " << swap56(x1) + swap56(x2) << endl;
    return 0;
}