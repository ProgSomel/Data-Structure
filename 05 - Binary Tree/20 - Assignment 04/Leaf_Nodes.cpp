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

vector<int> printLeafNode(Node* root){

    vector<int> v;
    if(root == NULL){
        return v;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* parent = q.front();
        q.pop();
        if(parent->left == NULL &&  parent->right == NULL) v.push_back(parent->val);
        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return v;
}

int main()
{
    Node* root = inputTree();
    vector<int> v = printLeafNode(root);
    sort(v.rbegin(), v.rend());
    for(int val:v) cout << val << " ";
    return 0;
}