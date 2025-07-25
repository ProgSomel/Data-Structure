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

void insert_at_tail(Node* &head, Node* &tail, int val ){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void printLinkedList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}

void deleteTail(Node* &head, Node* &tail, int idx){
    Node* tmp = head;
    for(int i = 1; i < idx; i++){
        tmp = tmp->next;
    }
    Node* deletedNode = tmp->next;
    tmp->next = deletedNode->next;
    delete deletedNode;
    tail = tmp;


}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(1){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }
    cout << "Tail before delete: " << tail->val << endl;
    deleteTail(head, tail, 5);
    printLinkedList(head);
    cout << "Tail after delete: " << tail->val << endl;
    return 0;
}