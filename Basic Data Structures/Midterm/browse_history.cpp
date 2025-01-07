#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string addr;
    Node* next;
    Node* prev;
    Node(string addr) {
        this->addr = addr;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node*& head, Node*& tail, string addr){
    Node* newNode = new Node(addr);
    if(head == NULL){
        head =newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void visitAddress(Node* head, Node*& current, string addr){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->addr == addr){
            cout<<temp->addr<<endl;
            current = temp;
            return;
        }
        temp = temp->next;
    }
    cout<<"Not Available"<<endl;
}

void next(Node*& current){
    if(current->next != NULL){
        current = current->next;
        cout<<current->addr<<endl;
    }
    else{
        cout<<"Not Available"<<endl;
    }
}

void prev(Node*& current){
    if(current->prev != NULL){
        current = current->prev;
        cout<<current->addr<<endl;
    }
    else{
        cout<<"Not Available"<<endl;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    while(1){
        string addr;
        cin>>addr;

        if(addr == "end"){
            break;
        }

        insert_at_tail(head, tail, addr);
    } 


    Node* current = NULL;
    int q;
    cin>>q;
    while(q--){
        string command;
        cin>>command;

        if(command == "visit"){
            string addr;
            cin>>addr;
            visitAddress(head, current, addr);
        }
        else if(command == "next"){
            next(current);
        }
        else if(command == "prev"){
            prev(current);
        }
    }
    
    return 0;
}