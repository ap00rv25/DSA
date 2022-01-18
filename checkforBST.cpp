#include<bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left;
    Node *right;
    Node(int k) {
        key = k;
        left = right = NULL;
    }
};

int prevv=INT_MIN;
bool isBST(Node* root)  
{  
    if (root == NULL)  
        return true;  
    
    if(isBST(root->left)==false)return false;
    
    if(root->key<=prevv)return false;
    prevv=root->key;
    
    return isBST(root->right);
}

int main() {
    Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);
	if(isBST(root))  
        cout<<"Is BST";  
    else
        cout<<"Not a BST"; 
    return 0;
}