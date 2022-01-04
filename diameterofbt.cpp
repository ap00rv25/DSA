#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;
    Node (int k) {
        key = k;
        left = right = NULL;
    }
};

int height(Node *root) {
    int res=0;
    if(root==NULL) return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    res = max(res,1+lh+rh);
    return 1+max(lh,rh);
}

int main() {
    Node *root = new Node(10);
    root -> left = new Node(20);
    root -> right = new Node(30);
    root -> right -> left = new Node(40);
    root -> right -> right = new Node(50);
    root -> left -> left = new Node(60);
    root -> left -> right = new Node(70);
    root -> left -> right -> right = new Node(80);
    cout<<height(root)<<endl;
	return 0;
}