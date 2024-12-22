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

void insert_at_head(Node*& head, Node*& tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node*& head, Node*& tail, int val){
    
    Node* newnode = new Node(val);
    if(head==NULL){
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void delete_from_head(Node*& head, Node*& tail){
    if(head == tail){
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
    
}

void delete_from_any_position(Node*& head, Node*& tail, int indx){
    if(head == NULL){
        cout<<"Empty List"<<endl;
        return;
    }
    if(indx == 0){
        delete_from_head(head, tail);
        return;
    }

    Node* temp = head;
    for(int i = 1; i<indx; i++){
        if(temp->next == NULL){
            cout<<"INVALID INDEX"<<endl;
            return;
        }
        temp = temp->next;
    }

    if(temp->next == NULL){
        cout<<"INVALID INDEX"<<endl;
        return;
    }
    Node* deleteNode = temp->next;
    if(deleteNode == tail){
        tail = temp;
    }
    temp->next = deleteNode->next;
    delete deleteNode;

}


void print_linked_list(Node* temp){
    while(temp!= NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    int Q;
    cin>>Q;
    Node* head = NULL;
    Node* tail = NULL;
    int count = 0;
    while(Q--){
        int x;
        cin>>x;

        int v;
        cin>>v;
        if(x == 0){
            insert_at_head(head, tail, v);
            count++;
        }
        else if(x == 1){
            insert_at_tail(head, tail, v);
            count++;
        }
        else if(x == 2 && v<count){
            delete_from_any_position(head, tail, v);
            count--;
        }
        print_linked_list(head);
    }
    
    return 0;
}