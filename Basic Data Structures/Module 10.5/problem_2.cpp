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
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void reverse_linked_list(Node* head, Node* tail){
    for(Node* i = head, *j  = tail; i!=j && i->prev!=j; i = i->next, j = j->prev){
        swap(i->val, j->val);
    }
}


void print_linked_list(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head1 = NULL;
    Node* tail1 = NULL;
    int size1 = 0;
    while(1){
        int val;
        cin>>val;

        if(val == -1){
            break;
        }
        insert_at_tail(head1, tail1, val);
        size1++;
    }
    
    reverse_linked_list(head1, tail1);
    print_linked_list(head1);


    return 0;
}


// ***Using STL***
// int main(){
//     list<int> l1;
//     while(1){
//         int val;
//         cin>>val;

//         if(val == -1){
//             break;
//         }
//         l1.push_back(val);
//     }

//     l1.reverse();
    
//     for(list<int>::iterator it = l1.begin(); it!= l1.end(); it++){
//         cout<<*it<<" ";
//     }
    
//     return 0;
// }