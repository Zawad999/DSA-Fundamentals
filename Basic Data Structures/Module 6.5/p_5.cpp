#include <bits/stdc++.h>
using namespace std;

int arr[101];

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
        return;
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
    Node* temp;
    int flag = 0;

    while(1){
        int val;
        cin>>val;
        if(val == -1){
            break;
        }
        
        if(temp!=NULL && val<(temp->val)  && flag == 0){
            flag = 1;
        }
        

        insert_at_tail(head, tail, val);
        if(head->next == NULL){
            temp = head;
        }
        else{
            temp = temp->next;
        }
        
        
    }

    print_linked_list(head);

    if(flag){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    

    return 0;
}