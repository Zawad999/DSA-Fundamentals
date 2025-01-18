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


void level_nodes(Node* root, int x){
    queue<pair<Node*, int>> q;
    q.push({root, 0});

    while(!q.empty()){
        pair p = q.front();
        q.pop();

        if(p.second == x){
            cout<<p.first->val<<" ";
        }

        if(p.first->left){
            q.push({p.first->left, p.second+1});
        }
        if(p.first->right){
            q.push({p.first->right, p.second+1});
        }
    }
}
int main(){

    Node* root = tree_input();
    
    int x;
    cin>>x;

    level_nodes(root, x);
    

    return 0;
}