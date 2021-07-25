//
// Created by ASUS on 21/05/2021.
//

#include<bits/stdc++.h>
using namespace std;
int cnt;
struct Node {
    int data;
    Node *left, *right;
    Node (int x) {
        data = x;
        left = right = NULL;
    }
};

Node *createBST (int a[], int begin, int end) {
    if (begin > end) return NULL;
    int mid = (begin + end) / 2;
    Node *root = new Node(a[mid]);
    root->left = createBST(a, begin, mid - 1);
    root->right = createBST(a, mid + 1, end);
    return root;
}

void PostOrder (Node *root) {
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL) cnt++;
    if (root->left != NULL) PostOrder(root->left);
    if (root->right != NULL) PostOrder(root->right);
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n+1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        Node *root = createBST(a, 0, n-1);
        cnt = 0;
        PostOrder(root);
        cout << cnt << endl;
    }
    return 0;
}