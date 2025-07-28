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

void isSame(Node* head1, Node* head2){
    Node* tmp1 = head1;
    Node* tmp2 = head2;
    bool flag = true;
    while(tmp1 != NULL){
        if(tmp1->val != tmp2->val){
            flag = false;
            break;
        }else{
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    
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
        }else{
            insertAtTail(head1, tail1, val);
        }
    }
    while(1){
        int val;
        cin >> val;
        if(val == -1){
            break;
        }else{
            insertAtTail(head2, tail2, val);
        }
    }
    int size1 = getSize(head1);
    int size2 = getSize(head2);
    if(size1 != size2){
        cout << "NO" << endl;
    }else{
        isSame(head1, head2);
    }
        
    

    return 0;
}