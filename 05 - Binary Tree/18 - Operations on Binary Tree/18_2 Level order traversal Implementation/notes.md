# Level order traversal Implementation

```c++
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right =NULL;
    }
};

void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        //? 1. ber kore ana
        Node* f = q.front();
        q.pop();
        //? 2. oi node nia kaj kora
        cout << f->val << " ";
        //? 3. children gula push kora queue te
        if(f->left!=NULL) 
            q.push(f->left);
        if(f->right!=NULL)
            q.push(f->right);
    }
}

int main()
{
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    levelOrder(root);
    return 0;
}
```
```bash
10 20 30 40 50 60
```

------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right =NULL;
    }
};

void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        //? 1. ber kore ana
        Node* f = q.front();
        q.pop();
        //? 2. oi node nia kaj kora
        cout << f->val << " ";
        //? 3. children gula push kora queue te
        if(f->left) 
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
}

int main()
{
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    levelOrder(root);
    return 0;
}
```
```bash
10 20 30 40 50 60
```