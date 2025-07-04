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

void insertAtTail(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void findMaxAndMin(Node* head){
    int maxValue = INT_MIN;
    int minValue = INT_MAX;

    Node* tmp = head;
    while (tmp != NULL)
    {
        /* code */
        if(tmp->val > maxValue){
            maxValue = tmp->val;
        }
        if(tmp->val < minValue){
            minValue = tmp->val;
        }
        tmp = tmp->next;
    }
    cout << maxValue - minValue << endl;
    
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while(1){
        int v;
        cin >> v;
        if(v == -1){
            break;
        }else{
            insertAtTail(head, tail, v);
        }
    }

    findMaxAndMin(head);

    return 0;
}