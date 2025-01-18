#include <bits/stdc++.h> 
using namespace std;




template <typename T>
class TreeNode {
    public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};



vector<int> getLeftView(TreeNode<int> *root)
{
    queue<pair<TreeNode<int>*, int>> q;

    q.push({root, 1});

    vector<int> v; //rigth now we're not at any level
 
    while(!q.empty()){
        pair<TreeNode<int>*, int> p = q.front();
        q.pop();
        cout<<"p.second: "<<p.second <<", v.size():"<<v.size()<<endl;
        if(p.second > static_cast<int>(v.size())){ //v.size() will indicate the levels that have been already visited, we're gonna start 
            v.push_back(p.first->data);
        }
        
        if(p.first->left){
            q.push({p.first->left, p.second+1});
        }
        if(p.first->right){
            q.push({p.first->right, p.second + 1});
        }
        cout<<"v_last: "<<v.back()<<endl;
    }

    return v;
}

int main(){
    return 0;
}