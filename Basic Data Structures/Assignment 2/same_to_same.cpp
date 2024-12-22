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

void print_linked_list(Node* temp){
    while(temp!= NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    Node* head1 = NULL;
    Node* tail1 = NULL;
    int count1 = 0;
    while(1){
        int val;
        cin>>val;

        if(val == -1){
            break;
        }

        insert_at_tail(head1, tail1, val);
        count1++;
    }

    Node* head2 = NULL;
    Node* tail2 = NULL;
    int count2 = 0;
    while(1){
        int val;
        cin>>val;

        if(val == -1){
            break;
        }

        insert_at_tail(head2, tail2, val);
        count2++;
    }

    if(count1!=count2){
        cout<<"NO";
    }
    else{
        int flag = 1;
        Node* temp1 = head1;
        Node* temp2 = head2;

        while(temp1!=NULL){
            if(temp1->val != temp2->val){
                flag = 0;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        if(flag){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    
    

   

    

    return 0;
}