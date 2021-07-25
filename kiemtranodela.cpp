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

int CheckLeafNode (Node *root) {
    queue<Node*> q;
    q.push(root);
    int res = INT16_MIN, level = 0;
    while (!q.empty()) {
        int size = q.size();
        level += 1;

        while(size > 0){
            Node* temp = q.front();
            q.pop();

            if (temp->left) {
                q.push(temp->left);
                if(!temp->left->right && !temp->left->left){
                    if (res == INT16_MIN) res = level;
                    else if (res != level) return 0;
                }
            }

            if (temp->right) {
                q.push(temp->right);
                if (!temp->right->left && !temp->right->right)
                    if (res == INT16_MIN) res = level;
                    else if(res != level) return 0;
            }
            size--;
        }
    }
    return 1;
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
        cout << CheckLeafNode(root) << endl;
    }
    return 0;
}