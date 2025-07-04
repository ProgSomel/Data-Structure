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

void insertAtHead(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
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

void deleteHead(Node* &head, Node* &tail){
    if(head == NULL)return;
    Node* deletedNode = head;
    head = deletedNode->next;
    delete deletedNode;
    if(head == NULL){
        tail = NULL;
    }
}

void deleteAtPosition(Node* &head, Node* &tail, int idx){
    if(head == NULL) return;
    Node* tmp = head;
    for(int i = 0; i < idx-1; i++){
        tmp = tmp->next;
    }
    if(tmp->next->next == NULL){
        tmp->next = NULL;
        tail = tmp;
        return;
    }
    Node* deletedNode = tmp->next;
    tmp->next = deletedNode->next;
    delete deletedNode;

}

int getSize(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void deleteValue(Node* &head, Node* &tail, int idx){
    if(head == NULL || idx < 0) return;
    int size = getSize(head);
    if(idx > size) return;
    if(idx == 0){
        deleteHead(head, tail);
        return;
    }
    if(idx < size){
        deleteAtPosition(head, tail, idx);
    }

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

    int q;
    cin >> q;

    while(q--){
        int x, v;
        cin >> x >> v;
        if(x == 0){
            insertAtHead(head, tail, v);
            printLinkedList(head);
        }else if(x == 1){
            insertAtTail(head, tail, v);
            printLinkedList(head);
        }else if(x == 2){
            deleteValue(head, tail, v);
            printLinkedList(head);
        }
    }
    

    return 0;
}