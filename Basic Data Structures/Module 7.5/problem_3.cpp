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
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void print_linked_list(Node* temp){
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void print_reversed_linked_list(Node* temp){
    if(temp == NULL){
        return;
    }
    print_reversed_linked_list(temp->next);
    cout<<temp->val<<" ";
}

void print_max(Node* temp){
    int max_val = -1;
    while(temp!=NULL){
        if(temp->val > max_val){
            max_val = temp->val;
        }
        temp = temp->next;  
    }
    cout<<max_val<<endl;
}
int main(){

    Node* head = NULL;
    Node* tail = NULL;

    int count = 0;

    while(1){
        int val;
        cin>>val;

        if(val == -1){
            break;
        }

        insert_at_tail(head, tail, val);
        count++;
    }
    
    print_max(head);
    return 0;
}