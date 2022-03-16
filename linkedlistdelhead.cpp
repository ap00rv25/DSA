#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int d) {
        data = d;
        next=NULL;
    }
};

void printlist(Node *head) {
    while(head!=NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node *insertend(Node *head, int x) {
    Node *temp = new Node(x);
    if(head==NULL) return temp;
    Node *curr = head;
    while(curr->next!=NULL) {
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

Node *deletehead(Node *head) {
    if(head==NULL) return NULL;
    else {
        Node *temp = head->next;
        delete head;
        return temp;
    }
}

int main() {
    Node *head = NULL;
    head = insertend(head,50);
    head = insertend(head,60);
    head = insertend(head,70);
    printlist(head);
    head=deletehead(head);
    cout<<endl;
    printlist(head);
    head=deletehead(head);
    cout<<endl;
    printlist(head);
	return 0;
}
