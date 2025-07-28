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

void isItPalindromeOrNot(Node* &head, Node* &tail){
    bool isPalindrome = true;
    for(Node* i = head, *j = tail; i!=j&&j!=i->prev; i = i->next, j=j->prev){
        if(i->val != j->val){
            isPalindrome = false;
        }
    }
    if(isPalindrome){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

void printLinkedList(Node* head){
    Node* tmp = head;
    while(tmp!=NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
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
        }
        insertAtTail(head, tail, val);
        
    }
    isItPalindromeOrNot(head, tail);

    return 0;
}