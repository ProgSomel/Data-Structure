# Stack Implementation using Doubly linked list

```c++
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int val) {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};


class Stack{
    public:
        
        Node* head = NULL;
        Node* tail = NULL;
        int sizeOfStack = 0;

        void push(int val){ //? O(1)
            sizeOfStack++;
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

        void pop(){ //? O(1)
            sizeOfStack--;
            Node* deletedNode = tail;
            tail = tail->prev;
            delete deletedNode;
            if(tail == NULL){
                head = NULL;
                return;
            }
            tail->next = NULL;
        }

        int top(){ //? O(1)
            return tail->val;
        }

        int size(){ //? O(1)
            return sizeOfStack; 
        }

        bool isEmpty(){ //? O(1)
            return head == NULL;
        }
};

int main()
{
    Stack st;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    while(!st.isEmpty()){
        cout << st.top() << " ";
        st.pop();
    }


    return 0;
}
```
```bash
//input
5
10 20 30 40 50
//output
5
10 20 30 40 50
```