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

    int count = 0;
    int flag = 0;

    while(1){
        int val;
        cin>>val;
        if(val == -1){
            break;
        }
        
        if(arr[val]!=0  && flag == 0){
            flag = 1;
        }
        arr[val]++;

        insert_at_tail(head, tail, val);
        count++;
    }

    // print_linked_list(head);

    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    

    return 0;
}