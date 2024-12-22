#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
        int val;
        Node* next;

        Node(int val){
            this->val = val;
            this->next = NULL;
        }

};

void insert_at_tail(Node*& head, Node*& tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = head;
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

    // print_linked_list(head);
    Node* temp = head; 
    int indx= count/2;
    for(int i = 1; i<indx; i++){
        temp = temp->next;
    }

    if(count%2 == 0){
        cout<<temp->val<<" "<<temp->next->val;
    }
    else{
        cout<<temp->next->val;
    }
    
    

    return 0;
}