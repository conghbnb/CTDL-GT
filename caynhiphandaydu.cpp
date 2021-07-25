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

void AddNode (Node *root, int n1, int n2, char c) {
    if (root == NULL) return;
    if (root->data == n1) {
        if (c == 'L') root->left = new Node(n2);
        else root->right = new Node(n2);
    }
    else {
        AddNode(root->left, n1, n2, c);
        AddNode(root->right, n1, n2, c);
    }
}

int IsFullBinaryTree (Node *root) {
    if (root->right == NULL && root->left == NULL) return 1;
    if (root->right && root->left) return IsFullBinaryTree(root->left) && IsFullBinaryTree(root->right);
    return 0;
}

int main() {
    int t, n, n1, n2;
    char c;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> n1 >> n2 >> c;
        Node *root = new Node(n1);
        AddNode(root, n1, n2 ,c);
        n--;
        while (n--) {
            cin >> n1 >> n2 >> c;
            AddNode(root, n1, n2, c);
        }
        cout << IsFullBinaryTree(root) << endl;
    }
    return 0;
}