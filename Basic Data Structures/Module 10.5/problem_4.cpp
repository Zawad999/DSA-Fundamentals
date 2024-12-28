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

void insert_at_head(Node*& head, Node*& tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    head->prev = newNode;
    newNode->next = head;
    head = newNode;

}

void insert_at_any_pos(Node*& head, Node*& tail, int indx, int val){
    
    if(indx == 0){
        insert_at_head(head, tail, val);
        return;
    }

    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i = 1; i<indx; i++){
        temp = temp->next;
    }
    
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next = newNode;
    if(newNode->next == NULL){
        tail = newNode;
        return;
    }
    newNode->next->prev = newNode;
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

void print_reverse(Node* tail){
    Node* temp = tail;

    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int size = 0;

    int q;
    cin>>q;
    while(q--){
        int x,v;
        cin>>x>>v;

        if(x>size){
            cout<<"Invalid"<<endl;
            continue;
        }
        insert_at_any_pos(head, tail, x, v);
        // insert_at_tail(head, tail, v);
        size++;
        print_linked_list(head);
        print_reverse(tail);

    }
    

    


    return 0;
}


// ***Using STL***
// int main(){
//     list<int> l1;
//     int q;
//     cin>>q;
//     while(q--){
//         int x, v;
//         cin>>x>>v;

//         if(x>l1.size()){
//             cout<<"Invalid"<<endl;
//             continue;
//         }
//         // for inserting at a specific position
//         l1.insert(next(l1.begin(), x),v);
        

//         // for printing forward
//         for(int x: l1){
//             cout<<x<<" "; //easier to do for printing forward otherwise we can do it using the normal for loop like we're gonna do next for revers printing
//         }
//         cout<<endl;

//         // For printing reverese
//         list<int>::reverse_iterator it = l1.rbegin();
//         while(it!=l1.rend()){
//             cout<<*it<<" ";
//             it++;
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }