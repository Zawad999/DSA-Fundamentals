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

void insert_at_tail(Node*& head, Node*& tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head =newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void check_palindrome(Node* head, Node* tail){
    for(Node* i = head, *j = tail; i!=j && i->prev != j; i = i->next , j = j->prev){
       if(i->val != j->val ){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES"<<endl;
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

    check_palindrome(head, tail);
    
    return 0;
}