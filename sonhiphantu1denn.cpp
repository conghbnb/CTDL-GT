//
// Created by ASUS on 28/04/2021.
//

#include<bits/stdc++.h>
using namespace std;

void generateBinary(int n)
{
    vector<string> res;
    queue<string>q;
    q.push("1");
    while(n--){
        q.push(q.front() + "0");
        q.push(q.front() + "1");
        res.push_back(q.front());
        q.pop();
    }
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        generateBinary(n);
    }
    return 0;
}