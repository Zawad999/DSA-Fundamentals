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


int main(){

    int count = 0;

    Node* head = NULL;
    Node* temp = NULL;
    while(1){
        int val;
        cin>>val;
        if(val == -1){
            break;
        }

        Node* newnode = new Node(val);
        count++;
        if(head == NULL){
            head = newnode;
            temp = head;
            continue;
        }

        temp->next = newnode;
        temp = newnode;
        
    }

    cout<<count;
    return 0;
}