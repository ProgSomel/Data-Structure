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

void printLinkedListInReverse(Node* tmp){
    if(tmp == NULL){
        return;
    }
    printLinkedListInReverse(tmp->next);
    cout << tmp->val << " ";
}


int main()
{
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
    Node* tmp = head;
    printLinkedListInReverse(tmp);

    return 0;
}