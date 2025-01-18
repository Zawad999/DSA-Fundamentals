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

void print_tree(Node* root){
    queue<Node*> q;

    q.push(root);

    while(!q.empty()){
        Node* p = q.front();
        q.pop();
        
        cout<<p->val<<" ";

        if(p->left){
            q.push(p->left);
        }

        if(p->right){
            q.push(p->right);
        }
    }

    cout<<endl;
}


void leaf_nodes_desc(Node* root, vector<int>& v){
    if(!root){
        return;
    }
    if(!root->left && !root->right){
        v.push_back(root->val);
    }

    leaf_nodes_desc(root->left, v);
    leaf_nodes_desc(root->right, v);
    
}


int main(){

    Node* root = tree_input();
    
    vector<int> v;

    leaf_nodes_desc(root, v);

    sort(v.begin(), v.end(), greater<int>());

    for(int x : v){
        cout<<x<<" ";
    }

    return 0;
}