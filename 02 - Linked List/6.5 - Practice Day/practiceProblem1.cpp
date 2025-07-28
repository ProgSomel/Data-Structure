#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next =NULL;
    }
};

int printSize(Node* &head){
    int sizeOfLinkedList = 0;
    Node* temp = head;
    while(temp != NULL){
        sizeOfLinkedList++;
        temp = temp->next;
    }
    return sizeOfLinkedList;
}


int main()
{
    Node* head = new Node(2);
    Node* a = new Node(1);
    Node* b = new Node(5);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(8);
    Node* tail = new Node(9);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = tail;

    int res = printSize(head);
    cout << res << endl;
    return 0;
}