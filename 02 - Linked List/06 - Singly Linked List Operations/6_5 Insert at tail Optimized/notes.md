# Insert at Tail Optimized

```c++
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
        tail = tail->next;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

void printLinkedList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}


int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->next = tail;
    insert_at_tail(head, tail, 100); 
    printLinkedList(head);
    cout << "Tail: " << tail->val << endl;
    return 0;
}
```
```bash
10
20
30
100
Tail: 100
```

-----------------------------------------------------------------------------------------------------------------------------------------

```c++
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

void printLinkedList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}


int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->next = tail;
    insert_at_tail(head, tail, 100); 
    printLinkedList(head);
    cout << "Tail: " << tail->val << endl;
    return 0;
}
```
```bash
10
20
30
100
Tail: 100
```