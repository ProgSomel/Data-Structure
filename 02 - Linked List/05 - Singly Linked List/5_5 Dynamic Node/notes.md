# Dynamic Node

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


int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    //? (*head).next = a;
    head->next = a;
    a->next = b;

    cout << (*head).val << endl; //? 10
    cout << head->val << endl; //? 10

    return 0;
}
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


int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    //? (*head).next = a;
    head->next = a;
    a->next = b;

    cout << (*head).val << endl; //? 10
    cout << head->val << endl; //? 10
    cout << head->next->val << endl; //? 20

    return 0;
}
```