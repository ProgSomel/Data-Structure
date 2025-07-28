# Insert at Tail

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

void insert_at_tail(Node* &head, int val ){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
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
    Node* b = new Node(30);

    head->next = a;
    a->next = b;
    insert_at_tail(head, 100); 
    printLinkedList(head);
    return 0;
}
```
```bash
10
20
30
100
```
**Function-by-function analysis:**

1. **insert_at_tail()**: **O(n)**
- Creates a new node: **O(1)**
- Checks if head is NULL: **O(1)**
- Traverses to the last node: The while loop runs until it reaches the last node, visiting each node once
- In a list of n nodes, this takes **O(n)** time
- Updates the last node's next pointer: **O(1)**

2. **printLinkedList()**: **O(n)**
- Traverses the entire linked list once
- Visits each of the n nodes exactly once

3. **main()**: **O(1)** for setup + **O(n)** for function calls
- Creating and linking initial nodes: **O(1)**
- Calling insert_at_tail(): **O(n)**
- Calling printLinkedList(): **O(n)**