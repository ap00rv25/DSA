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

int search(Node *head, int x) {
    int pos = 1;
    Node *curr = head;
    while(curr!=NULL) {
        if(curr->data==x) return pos;
        else {
            pos++;
            curr=curr->next;
        }
    }
    return -1;
}

int main() {
    Node *head = NULL;
    head = insertend(head,50);
    head = insertend(head,60);
    head = insertend(head,70);
    printlist(head);
    cout<<endl;
    cout<<search(head,70);
	return 0;
}
