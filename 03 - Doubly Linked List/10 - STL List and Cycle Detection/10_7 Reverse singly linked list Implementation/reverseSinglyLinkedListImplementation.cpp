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

void insert_at_tail(Node* &head, Node* &tail, int val ){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void reverseLinkedList(Node* &head, Node* tmp, Node* &tail){
    if (tmp->next == NULL){
        head = tmp;
        return;
    }
    reverseLinkedList(head, tmp->next, tail);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
}

void printLinkedList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(1){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }
    reverseLinkedList(head, head, tail);
    printLinkedList(head);
    cout << "Head: " << head->val << endl;
    cout << "Head Next: " << head->next->val << endl;
    cout << "Tail: " << tail->val << endl;
    return 0;
}