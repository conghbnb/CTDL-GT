//
// Created by ASUS on 21/05/2021.
//

#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node (int x) {
        data = x;
        left = right = NULL;
    }
};

void AddNode (Node* &root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return;
    }
    if (data > root->data) AddNode(root->right, data);
    if (data < root->data) AddNode(root->left, data);
}

int isBST (Node *root) {

}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n+1];
        Node *root = NULL;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            AddNode(root, a[i]);
        }
        PostOrder(root);
        cout << endl;
    }
    return 0;
}