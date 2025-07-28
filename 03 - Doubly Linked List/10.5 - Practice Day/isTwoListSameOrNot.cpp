#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val) {
        this->val = val;
        this->prev = NULL;
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
    newNode->prev = tail;
    tail = newNode;
}

int findSize(Node* head){
    Node* tmp = head;
    int count = 0;
    while(tmp!=NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}

void isEqual(Node* head1, Node* head2){
    Node* tmp1 = head1;
    Node* tmp2 = head2;
    bool isEqual = true;
    while(tmp1!=NULL){
        if(tmp1->val!=tmp2->val){
            isEqual = false;
            break;
        }else{
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
    }
    if(isEqual){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;

    Node* head2 = NULL;
    Node* tail2 = NULL;

    while(1){
        int val;
        cin >> val;
        if(val == -1){
            break;
        }
        insertAtTail(head1, tail1, val);

    }
    while(1){
        int val;
        cin >> val;
        if(val == -1){
            break;
        }
        insertAtTail(head2, tail2, val);
    }

    int size1 = findSize(head1);
    int size2 = findSize(head2);
    if(size1 != size2){
        cout << "NO" << endl;
    }else{
        isEqual(head1, head2);
    }
    
    
    return 0;
}