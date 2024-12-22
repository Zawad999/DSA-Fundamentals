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

void insert_at_head(Node*& head, Node*& tail, int val){
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
    if(tail == NULL){
        tail = head;
    }
}

void insert_at_any_pos(Node*& head, Node*& tail, int indx, int val, int list_size){
    if(indx == list_size-1){
        insert_at_tail(head, tail, val);
        return;
    }
    
    if(indx == 0){
        insert_at_head(head, tail, val);
        return;
    }
    
    Node* newnode = new Node(val);
    Node* temp = head;
    for(int i = 1; i<indx; i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void print_linked_list(Node* temp){
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int linked_list_size(Node* temp){
    int list_size = 0;
    while(temp!=NULL){  
        list_size++;
        temp = temp->next;
    }
    return list_size;
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



    int list_size = linked_list_size(head);
    int indx,val;
    while(cin>>indx>>val){
        
        if(indx<0 || indx>list_size){
            cout<<"Invalid"<<endl;
            continue;
        }

        insert_at_any_pos(head, tail, indx, val,list_size);
        list_size++;
        print_linked_list(head);
    }
    
    
    

    return 0;
}