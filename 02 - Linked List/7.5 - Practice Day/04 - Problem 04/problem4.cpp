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


void insert_at_any_position(Node* &head, int idx, int val ){
    Node* newNode = new Node(val);
    
    Node* temp = head;
    for(int i = 1; i < idx; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int sizeLinkedList(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}


void printLinkedList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    while(1){
        int val;
        cin >> val;
    if(val == -1){
        break;
    }else{
        insertAtTail(head, tail, val);
    }
    }
    int idx, val;
    while(cin >> idx >> val){
        int size = sizeLinkedList(head);
        if(idx > size){
            cout << "Invalid\n";
        }else if(idx == size){
            insertAtTail(head, tail, val);
            printLinkedList(head);
        }else if(idx == 0){
            insert_at_head(head, val);
            printLinkedList(head);
        }else{
            insert_at_any_position(head, idx, val);
            printLinkedList(head);

        }
    } 

    return 0;
}