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

void insert_at_tail(Node*& head, int val){
    if(head == NULL){
        head = new Node(val);
        return;
    }
    
    Node* newnode = new Node(val);
    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newnode;

    
}

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node (30);

    a->next = b;
    b->next = c;
    
    
    Node* head = a;

    // Node* head = NULL;

    print_linked_list(head);

    // Inserting new node at tails;
    insert_at_tail(head, 1000);
    insert_at_tail(head, 2000);
    insert_at_tail(head, 3000);
    insert_at_tail(head, 4000);

    print_linked_list(head);



    return 0;
}
