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

int identicalTrees (Node *root1, Node *root2) {
    if (root1 == NULL && root2 == NULL) return 1;
    if (root1 != NULL && root2 != NULL) {
        return root1->data == root2->data && identicalTrees(root1->left, root2->left) && identicalTrees(root1->right, root2->right);
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
        Node *root1 = new Node(n1);
        AddNode(root1, n1, n2 ,c);
        int n0 = --n;
        while (n--) {
            cin >> n1 >> n2 >> c;
            AddNode(root1, n1, n2, c);
        }
        cin >> n1 >> n2 >> c;
        Node *root2 = new Node(n1);
        AddNode(root2, n1, n2 ,c);
        while (n0--) {
            cin >> n1 >> n2 >> c;
            AddNode(root2, n1, n2, c);
        }
        cout << identicalTrees(root1, root2) << endl;
    }
    return 0;
}