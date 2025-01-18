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

void print_outer_left(Node* root){
    if(!root){
        return;
    }

    if(root->left){
        print_outer_left(root->left);
    }
    else{
        print_outer_left(root->right);
    }
    cout<<root->val<<" ";
}
void print_outer_right(Node* root){
    if(!root){
        return;
    }
    cout<<root->val<<" ";
    if(root->right){
        print_outer_right(root->right);
    }
    else{
        print_outer_right(root->left);
    }
    
}

void print_outer_tree(Node* root){
    print_outer_left(root->left);
    cout<<root->val<<" ";
    print_outer_right(root->right);
}
int main(){

    Node* root = tree_input();
    
    print_outer_tree(root);
    

    return 0;
}