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
    }
};



void print_linked_list(Node* temp){
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    Node* head = new Node(12);
    Node* a = new Node(2);
    Node* b = new Node(1);
    Node* c = new Node(122);

    head->next = a;
    a->next = b;
    b->next = a;
    

    Node* hare = head;
    Node* tortoise = head;

    //or you can use "slow" for tortoise or "fast" instead of hare

    bool flag = false;

    while(hare != NULL && hare->next != NULL){

        hare = hare->next->next;
        tortoise =  tortoise->next;

        if(hare == tortoise){
            flag = true;
            break;
        }
    }

    if(flag){
        cout<<"Cycle Detected"<<endl;
    }
    else{
        cout<<"No Cycle Detected"<<endl;
    }
    

    return 0;
}
