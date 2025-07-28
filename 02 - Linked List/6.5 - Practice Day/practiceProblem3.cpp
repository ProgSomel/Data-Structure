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

int findSize(Node* head){
    int size = 0;
    Node* tmp = head;
    while(tmp != NULL){
        size++;
        tmp = tmp->next;
    }
    return size;
}

void printMiddleValue(Node* head, int size){
    Node* tmp = head;
    if(size % 2 == 0){
        int val = size/2;
        for(int i = 0; i < val-1; i++){
            tmp = tmp->next;
        }
        cout << tmp->val << " " << tmp->next->val << endl;
    }else{
        int val = size/2;
        for(int i = 0; i < val; i++){
            tmp = tmp->next;
        }
        cout << tmp->val << endl;
    }
}

int main()
{   
    Node* head = new Node(2);
    Node* a = new Node(4);
    Node* b = new Node(6);
    Node* c = new Node(8);
    Node* tail = new Node(10);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = tail;

    int res = findSize(head);
    printMiddleValue(head, res);
    return 0;
}