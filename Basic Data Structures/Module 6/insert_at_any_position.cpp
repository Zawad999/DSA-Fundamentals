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

void insert_at_any_position(Node*& head, int indx, int val){
    Node* newnode = new Node(val);

    if(indx ==  0){
        newnode->next = head;
        head = newnode;
        return;
    }    

    Node* temp = head;
    for(int i = 1; i<indx; i++){
        temp = temp->next;
    }

    newnode->next = temp->next;
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
    Node* c = new Node(30);

    a->next = b;
    b->next = c;


    Node* head = a;

    print_linked_list(head);

    insert_at_any_position(head, 0, 12);
    print_linked_list(head);
    insert_at_any_position(head, 4, 122);
    print_linked_list(head);
    insert_at_any_position(head, 2, 99);
    print_linked_list(head);
    return 0;
}