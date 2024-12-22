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


void delete_at_head(Node*& head, Node*& tail){
    if(head->next == NULL){
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
}

void delete_at_tail(Node*& head, Node*& tail){
    if(head == tail){
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    
    Node* temp = head;

    while(temp->next != tail){
        temp = temp->next;
    }
    
    delete  tail;
    tail = temp;
    tail->next = NULL;
}

void delete_at_any_position(Node*& head, Node*& tail, int indx){
    if(indx == 0){
        if(head->next == NULL){
            delete head;
            head = NULL;
            tail = NULL;
            return;
        }
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    Node* temp = head;
    for(int i = 1; i<indx; i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;

    if(temp->next  == NULL){
        tail = temp;
    }
    
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

void sort_linked_list(Node* head){

    for(Node* i = head; i->next!=NULL; i = i->next){
        for(Node* j = i->next; j !=NULL; j = j->next){
            if(i->val>j->val){
                int temp = i->val;
                i->val = j->val;
                j->val = temp;
            }
        }
    }
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
    sort_linked_list(head);
    print_linked_list(head);



    return 0;
}