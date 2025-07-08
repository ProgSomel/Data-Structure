# Printing Doubly Linked List
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
    printBackward(tail);

    return 0;
}
```
```bash
10 20 30 
30 20 10
```