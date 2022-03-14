#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};

void printlist(Node *head) {
    while(head!=NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node *insertbegin(Node *head,int x) {
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

int main() {
    Node *head = NULL;
    head = insertbegin(head,40);
    head = insertbegin(head,30);
    head = insertbegin(head,20);
    head = insertbegin(head,10);
    printlist(head);
	return 0;
}

//insertion at begining//