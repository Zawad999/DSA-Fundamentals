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
        int val,x;
        cin>>x>>val;

        if(x == -1){
            break;
        }
        
        if(x == 0){
            insert_at_head(head, tail, val);
        }
        else if(x == 1){
            insert_at_tail(head,tail, val);
        }
        else if (x == 2){
            cout<<"Insert At Index: ";
            int indx;
            cin>>indx;
            insert_at_any_pos(head, tail, indx, val);
        }
        print_forward(head);
        print_backward(tail);
    }

    delete_list(head, tail);
    
    return 0;
}