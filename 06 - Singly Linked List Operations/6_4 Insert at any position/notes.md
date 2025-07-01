# Insert at any position

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

void insert_at_any_position(Node* &head, int idx, int val ){
    Node* newNode = new Node(val);
    
    Node* temp = head;
    for(int i = 1; i < idx; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
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
    insert_at_any_position(head, 2, 100); 
    printLinkedList(head);
    return 0;
}
```
**Function-by-function analysis:**
1. **insert_at_any_position()**: O(k) where k is the index
- The for loop runs (idx - 1) times to reach the insertion position
- In the worst case, k can be equal to n (inserting at the end)
- So worst-case time complexity is O(n)

2. **printLinkedList()**: O(n)
- Traverses the entire linked list once
- Visits each node exactly once

3. **main()**: O(1) for setup + O(n) for function calls
- Creating and linking nodes: O(1)
- Calling insert_at_any_position(): O(k) ≤ O(n)
- Calling printLinkedList(): O(n)

**Overall time complexity:**
O(n) - dominated by either the insertion (if inserting near the end) or the printing function.