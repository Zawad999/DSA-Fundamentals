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


void insert_head(Node*& head, int val){
    Node* newNode= new Node(val);
    newNode->next = head;
    head = newNode;
}
int main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node (30);

    head->next = a;
    a->next = b;


    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;

    // Inserting a new head;
    insert_head(head, 1000);

    temp  = head;
    while(temp!= NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }


    return 0;
}