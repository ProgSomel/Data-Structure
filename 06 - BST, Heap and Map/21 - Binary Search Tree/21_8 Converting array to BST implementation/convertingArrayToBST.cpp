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

Node* convertArrayToBST(int arr[], int size, int l, int r){
    if(l > r){
        return NULL;
    }
    int mid = (l+r)/2;
    Node* root = new Node(arr[mid]);
    Node* leftRoot = convertArrayToBST(arr, size, l, mid-1);
    Node* rightRoot = convertArrayToBST(arr, size, mid+1, r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}

void levelOrder(Node* root){
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* parent = q.front();
        q.pop();
        cout << parent->val << " ";
        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
}

int main()
{   
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Node* root = convertArrayToBST(arr, n, 0, n-1);
    levelOrder(root);
    return 0;
}