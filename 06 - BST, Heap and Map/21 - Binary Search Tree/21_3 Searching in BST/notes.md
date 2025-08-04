# Searching in BST
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

Node* inputTree(){
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* parent = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node* myLeft, *myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);
        parent->left = myLeft;
        parent->right = myRight;
        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;
}

bool search(Node* root, int val){
    if(root == NULL) return false;
    if(root->val == val) return true;
    if(val > root->val) {
        bool l = search(root->right, val);
        return l;
    }
    else{
        bool r = search(root->left, val);
        return r;
    }
}

int main()
{
    Node* root = inputTree();
    int val;
    cin >> val;
    if(search(root, val)){
        cout << "Found" << endl;
    }else{
        cout << "Not Found" << endl;
    }
    return 0;
}
```

--------------------------------------------------------------------------------------------------------------

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

Node* inputTree(){
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* parent = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node* myLeft, *myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);
        parent->left = myLeft;
        parent->right = myRight;
        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;
}

bool search(Node* root, int val){
    if(root == NULL) return false;
    if(root->val == val) return true;
    if(val > root->val) {
        return search(root->right, val);
    }
    else{
        return search(root->left, val);
    }
}

int main()
{
    Node* root = inputTree();
    int val;
    cin >> val;
    if(search(root, val)){
        cout << "Found" << endl;
    }else{
        cout << "Not Found" << endl;
    }
    return 0;
}
```