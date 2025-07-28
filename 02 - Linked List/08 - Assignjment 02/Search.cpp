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

void findValue(Node* head, int val){
    Node* tmp = head;
    int cnt = 0;
    bool flag = false;
    while(tmp != NULL){
        if(tmp->val == val){
            flag = true;
            break;
        }else{
            cnt++;
        }
        tmp = tmp->next;
    }
    if(flag == true){
        cout << cnt << endl;
    }else{
        cout << "-1" << endl;
    }
    
}


int main()
{

    int t;
    cin >> t;

    while(t--){
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
        int x;
        cin >> x;
        findValue(head, x);
    }

    return 0;
}