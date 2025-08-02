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

int maxHeight(Node* root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r)+1;
}

void levelNodes(Node* root, int x, int maxLevel){
    if(x > maxLevel){
        cout << "Invalid";
        return;
    }
    queue<pair<Node*, int>> q;
    if(root) q.push({root, 0});
    while(!q.empty()){
        pair<Node*, int> parent = q.front();
        q.pop();
        Node* node = parent.first;
        int level = parent.second;
        if(level == x){
            cout << node->val << " ";
        }
        if(node->left) q.push({node->left, level+1});
        if(node->right) q.push({node->right, level+1});

    }

}



int main()
{
    Node* root = inputTree();
    int x;
    cin >> x;
    int maxLevel = maxHeight(root);
    levelNodes(root, x, maxLevel);
    
    return 0;
}