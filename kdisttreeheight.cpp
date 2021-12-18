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

void printdist(Node *root, int k) {
    if(root==NULL) return;
    if(k==0) {
        cout<<root->key<<" ";
    }
    else {
        printdist(root -> left , k-1);
        printdist(root -> right , k-1);
    }
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
    int k=2;
    printdist(root,k);
	return 0;
}
