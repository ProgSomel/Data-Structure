#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val) {
        this->val = val;
        this->prev = NULL;
        this->next =NULL;
    }
};

void insertAtAnyPosition(Node* &head, Node* &tail, int pos, int val){
    Node* newNode = new Node(val);
    Node* tmp = head;
    for(int i = 0; i < pos-1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
    newNode->prev = tmp;
}

void printForward(Node* head){
    Node* tmp = head;
    while (tmp != NULL)
    {
        /* code */
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
    
}

void printBackward(Node* tail){
    Node* tmp = tail;
    while(tmp!=NULL){
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    printForward(head);
    insertAtAnyPosition(head, tail, 2, 100);
    printForward(head);

    return 0;
}