#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void reverse_linked_list(Node*&head, Node*& tail, Node* temp){
    if(temp->next == NULL){
        head = tail;
        return;
    }
    reverse_linked_list(head, tail, temp->next);
    temp->next->next = temp;
    temp->next= NULL;
    tail = temp;
}


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
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
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

        insert_at_tail(head, tail,val);
    }

    print_linked_list(head);

    reverse_linked_list(head, tail, head);
    print_linked_list(head);

    return 0;
}
