//
// Created by ASUS on 06/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
string s[11];
int n, mark[11] = {0}, res = INT16_MAX, str[11];

int count1 (int i) {
    int count2 = 0;
    int have[26] = {0};
    string s1 = s[str[i-1]], s2 = s[str[i]];
    for (int j = 0; j < s1.length(); j++) have[s1[j] - 'A'] = 1;
    for (int j = 0; j < s2.length(); j++) {
        if (have[s2[j] - 'A']) count2++;
    }
    return count2;
}

void Try (int i, int repeat) {
    if (repeat >= res) return;
    if (i == n + 1) res = repeat;
    for (int j = 1; j <= n; j++) {
        if (!mark[j]) {
            str[i] = j;
            mark[j] = 1;
            int tp = count1(i);
            Try(i+1, repeat + tp);
            mark[j] = 0;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> s[i];
    Try(1, 0);
    cout << res << endl;
    return 0;
}