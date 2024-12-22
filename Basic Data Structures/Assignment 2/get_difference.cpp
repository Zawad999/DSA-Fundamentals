#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node*& head, Node*& tail, int val){
    
    Node* newnode = new Node(val);
    if(head==NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void print_linked_list(Node* temp){
    while(temp!= NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){

    Node* head = NULL;
    Node* tail = NULL;

    while(1){
        int val;
        cin>>val;

        if(val == -1){
            break;
        }

        insert_at_tail(head, tail, val);
    }

    Node* temp = head;

    int max_val = INT_MIN;
    int min_val = INT_MAX;

    while(temp!=NULL){
        max_val = max(max_val, temp->val);
        min_val = min(min_val, temp->val);
        temp = temp->next;
    }

    cout<<max_val-min_val;

    return 0;
}