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

int isLeaf (Node *root) {
    if (root == NULL) return 0;
    if (root->right == NULL && root->left == NULL) return 1;
    return 0;
}

int isSumTree (Node *root) {
    int rs, ls;
    if (root == NULL || isLeaf(root)) return 1;
    if (isSumTree(root->right) && isSumTree(root->left)) {
        if (root->right == NULL) rs = 0;
        else if (isLeaf(root->right)) rs = root->right->data;
        else rs = 2 * root->right->data;

        if (root->left == NULL) ls = 0;
        else if (isLeaf(root->left)) ls = root->left->data;
        else ls = 2 * root->left->data;
        return rs + ls == root->data;
    }
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
        cout << isSumTree(root) << endl;
    }
    return 0;
}