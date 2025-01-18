#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }

};

Node* tree_input(){
    queue<Node*> q;

    int val;
    cin>>val;
    if(val == -1){
        return NULL;
    }
    Node* root = new Node(val);

    q.push(root);

    while(!q.empty()){
        Node* p = q.front();
        q.pop();
        int left, right;
        cin>>left>>right;

        if(left != -1){
            Node* l_node = new Node(left);
            p->left = l_node;
            q.push(l_node);
        }

        if(right != -1){
            Node* r_node = new Node(right);
            p->right = r_node;
            q.push(r_node);
        }
    }

    return root;
}


bool perfect_tree(Node* root){
    if(!root){
        return true;
    }
    
    if((root->left && !root->right)||(!root->left && root->right)){
        return false;
    }
    return perfect_tree(root->left) && perfect_tree(root->right);
}
int main(){

    Node* root = tree_input();
    bool b= perfect_tree(root);
    
    b? cout<<"YES" : cout<<"NO";

    return 0;
}