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

bool hasDuplicate(Node* head, int arr[]){
    Node* tmp = head;
    while(tmp != NULL){
        if(tmp->val == arr[tmp->val]){
            return true;
        }else{
            arr[tmp->val] = tmp->val;
            tmp = tmp->next;
        }
    }
    return false;
}

int main()
{   
    Node* head = new Node(2);
    Node* a = new Node(4);
    Node* b = new Node(5);
    Node* c = new Node(6);
    Node* d = new Node(7);
    Node* tail = new Node(4);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = tail;

    int freq[100] = {0};

    int res = hasDuplicate(head, freq);
    if(res){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}