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

void insertAtTail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void printLinkedList(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val<< " ";
        tmp = tmp->next;
    }
}


int main()
{
    int t = 2;
    while(t--){
        Node* head = NULL;
        Node* tail = NULL;
        while(1){
            int val;
            cin >> val;
        if(val == -1){
            break;
        }else{
            insertAtTail(head, tail, val);
        }
        }
        printLinkedList(head);
        
    }

    return 0;
}