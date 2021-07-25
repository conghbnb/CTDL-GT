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

void LevelOrder (Node *root) {
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node *node = q.front(); q.pop();
        cout << node->data << " ";
        if (node->left != NULL) q.push(node->left);
        if (node->right != NULL) q.push(node->right);
    }
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
        LevelOrder(root);
        cout << endl;
    }
    return 0;
}