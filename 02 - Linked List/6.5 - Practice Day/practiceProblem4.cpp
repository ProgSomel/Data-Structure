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



bool isSorted(Node* head){
    Node* tmp = head;
    while(tmp->next != NULL){
        if(tmp->val > tmp->next->val){
            return false;
        }else{
            tmp = tmp->next;
        }
    }
    return true;
}

int main()
{   
    Node* head = new Node(1);
    Node* a = new Node(5);
    Node* b = new Node(6);
    Node* c = new Node(8);
    Node* tail = new Node(9);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = tail;

    int res = isSorted(head);
    if(res){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}