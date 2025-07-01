# Insert at Head

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

void insert_at_head(Node* head, int val ){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
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
    insert_at_head(head, 100); 
    printLinkedList(head);
    return 0;
}
```
```bash
10
20
30
```
**Function-by-function analysis:**

1. **insert_at_head()**: O(1)
- Creates a new node: O(1)
- Updates pointers: O(1)
- No loops or recursion

2. **printLinkedList()**: O(n)
- Traverses the entire linked list once
- Visits each of the n nodes exactly once
- The while loop runs n times

3. **main()**: O(1) for setup + O(n) for function calls
- Creating initial nodes: O(1)
- Linking nodes: O(1)
- Calling insert_at_head(): O(1)
- Calling printLinkedList(): O(n)

**Overall time complexity:**
O(n) - dominated by the printLinkedList() function.

**Space complexity:**
**O(1)** - only using a constant amount of extra space (the **temp** pointer and **newNode** pointer), not counting the space for the linked list itself.


---------------------------------------------------------------------------------------------------------------------------------------

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

void insert_at_head(Node* &head, int val ){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
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
    insert_at_head(head, 100); 
    printLinkedList(head);
    return 0;
}
```
```bash
100
10
20
30
```