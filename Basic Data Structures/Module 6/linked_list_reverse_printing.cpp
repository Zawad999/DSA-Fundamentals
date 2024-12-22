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
    if(tail == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    
    tail->next = newnode;
    tail = newnode;
}

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp!=NULL){
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
    print_linked_list(head);
    print_reversed_linked_list(head);


    return 0;
}
