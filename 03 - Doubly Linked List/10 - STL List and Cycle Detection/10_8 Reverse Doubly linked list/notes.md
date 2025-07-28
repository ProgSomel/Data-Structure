# Reverse Doubly linked list
```c++
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

void insertAtTail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
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

void reverseDoublyLinkedList(Node* head, Node* tail){
    for(Node* i = head, *j = tail; i!=j && j!=i->prev; i = i->next, j = j->prev){
        swap(i->val, j->val);
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(1){
        cin >>  val;
        if(val == -1){
            break;
        }
        insertAtTail(head, tail, val);
    }
    printForward(head);
    reverseDoublyLinkedList(head, tail);
    printForward(head);
    cout << "Head: " << head->val << endl;
    cout << "Head Next: " << head->next->val << endl;

    return 0;
}
```
```bash
10 20 30 40 50 
50 40 30 20 10 
Head: 50
Head Next: 40
```
