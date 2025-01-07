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

void insert_at_any_pos(Node*& head, Node*& tail, int indx, int val){
    Node* newNode = new Node(val);

    if(indx == 0){
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp  = head;

    for(int i = 0; i<indx-1; i++){
        temp = temp->next;
    }

    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next = newNode;

    if(newNode->next == NULL){
        tail = newNode;
        return;
    }
    newNode->next->prev = newNode;
}

void left_to_right(Node* head){
    Node* temp = head;
    cout<<"L -> ";
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void right_to_left(Node* tail){
    Node* temp = tail;
    cout<<"R -> ";
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int q;
    cin>>q;
    int list_size = 0;
    while(q--){
        int x,v;
        cin>>x>>v;
        
        if(x > list_size){
            cout<<"Invalid"<<endl;
        }
        else{
            insert_at_any_pos(head, tail, x, v);
            list_size++;
            left_to_right(head);
            right_to_left(tail);
        }
    } 
}