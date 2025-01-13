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
    int root_val;
    cin>>root_val;
    if(root_val==-1){
        return NULL;
    }
    Node* root = new Node(root_val);
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        //get the root node
        Node* p = q.front();
        q.pop();
        

        //work with left and right
        int l, r;
        cin>>l>>r;
        Node* left;
        Node* right;
        if(l==-1)left = NULL;
        else left = new Node(l);

        if(r==-1)right = NULL;
        else right = new Node(r);

        p->left = left;
        p->right = right;
        if(p->left){
            q.push(p->left);
        } 
        if(p->right){
            q.push(p->right);
        }
    }
    return root;
    
}


void level_order_print(Node* root){
    if(!root){
        cout<<"Empty Tree"<<endl;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        cout<<f->val<<" ";

        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
}

int tree_max_height(Node* root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 0; //becasue we know leaf node height is zero
    }
    int l = tree_max_height(root->left);
    int r = tree_max_height(root->right);
    
   
    return max(l,r)+1;


}
int count_nodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int count;
    // count = count_nodes(root->left)+count_nodes(root->right)+1;
    //or
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    count = l+r+1;
    return count;
}

int main(){

    Node* root = tree_input();
    cout<<count_nodes(root)<<endl;
    cout<<tree_height(root);
    return 0;
}