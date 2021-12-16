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

// for inorder traversal (left , root , right) //
void inorder(Node *root) {
    if(root!=NULL) {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}

//for preorder traversal (root , left , right) //
void preorder(Node *root) {
    if(root!=NULL) {
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

// for postorder traversal (left , right , root) //
void postorder(Node *root) {
    if(root!=NULL) {
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }
}

int main() {
    Node *root = new Node(10);
    root -> left = new Node(20);
    root -> right = new Node(30);
    root -> right -> left = new Node(40);
    root -> right -> right = new Node(50);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
	return 0;
}
