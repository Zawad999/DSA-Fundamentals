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

void reverse_linked_list(Node* head, Node* tail){
    for(Node* i = head, *j = tail; i!=j && i->prev!=j ; i= i->next, j = j->prev){
        swap(i->val, j->val);
    }
}

void delete_list(Node*& head, Node*& tail) {
    Node* current = head;

    // Traverse through the list and delete each node
    while (current != NULL) {
        Node* nextNode = current->next; // Store the next node
        delete current;                // Free the current node
        current = nextNode;            // Move to the next node
    }

    // Reset the head and tail pointers
    head = NULL;
    tail = NULL;

    cout << "Doubly linked list has been deleted." << endl;
}


// ********insertion********* 
void insert_at_head(Node*& head, Node*& tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node*& head, Node*& tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}
void insert_at_any_pos(Node*& head, Node*& tail, int indx, int val){
    //index 0 means it points to head, so we need to insert before head,
    if(indx == 0){
        insert_at_head(head, tail, val);
        return;    
    }
    
    //fint the Node which is before the index Node
    Node* temp = head;
    for(int i = 0; i<indx-1; i++){
        temp = temp->next;
    }
    //if temp points to tail, and the index points to the position after tail, means 
    //we need to insert after tail
    if(temp->next == NULL){
        insert_at_tail(head, tail, val);
        return;
    }
    Node* newNode = new Node(val);
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
}


// ********Deleteion*********
void delete_from_head(Node*& head, Node*& tail){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL){
        tail = NULL;
        return;
    }
    head->prev = NULL;
}
void delete_from_tail(Node*& head, Node*& tail){
    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if(tail == NULL){
        head = NULL;
        return;
    }
    tail->next = NULL;
}
void delete_from_any_pos(Node*& head, Node*& tail, int indx){
    if(indx == 0){
        delete_from_head(head, tail);
        return;
    }
    Node* temp = head;
    for(int i = 0; i<indx-1; i++){
        temp = temp->next;
    }
    if(temp->next->next == NULL){
        delete_from_tail(head, tail);
        return;
    }

    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    deleteNode->next->prev = deleteNode->prev;
    delete deleteNode;
}

// ********Printing*********
void print_forward(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void print_backward(Node* tail){
    Node* temp = tail;
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->prev;
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

    print_forward(head);

    reverse_linked_list(head, tail);

    print_forward(head);
    
    
    return 0;
}