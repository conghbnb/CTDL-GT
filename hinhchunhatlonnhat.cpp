//
// Created by ASUS on 02/05/2021.
//

#include<bits/stdc++.h>
using namespace std;

long long getMaxArea(int hist[], int n) {
    stack<int> s;
    long long max_area = 0, tp, area_with_top, i = 0;

    while (i < n) {
        if (s.empty() || hist[s.top()] <= hist[i]) s.push(i++);
        else {
            tp = s.top();
            s.pop();
            area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);
            if (max_area < area_with_top) max_area = area_with_top;
        }
    }

    while (s.empty() == false) {
        tp = s.top();
        s.pop();
        area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);
        if (max_area < area_with_top) max_area = area_with_top;
    }
    return max_area;
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n+1];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << getMaxArea(a, n) << endl;
    }
    return 0;
}