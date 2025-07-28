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
        this->next =NULL;
    }
};


class myQueue{
    public:
    Node* head = NULL;
    Node* tail = NULL;

    int sizeOfQueue = 0;

    void push(int val){ //? O(1)
        sizeOfQueue++;
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
        sizeOfQueue--;
        Node* deletedNode = head;
        head = head->next;
        delete deletedNode;
        if(head == NULL){
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }

    int front(){ //? O(1)
        return head->val;
    }

    int back(){ //? O(1)
        return tail->val;
    }

    int size(){
        return sizeOfQueue;
    }

    bool empty(){
        return head == NULL;
    }
};

int main()
{   
    myQueue q;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        q.push(val);
    }
    
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}