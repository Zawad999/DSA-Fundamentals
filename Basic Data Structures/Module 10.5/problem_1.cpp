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
    

    int size2 = 0;
    Node* head2 = NULL;
    Node* tail2 = NULL;
    while(1){
        int val;
        cin>>val;

        if(val == -1){
            break;
        }
        insert_at_tail(head2, tail2, val);
        size2++;
    }
    
    bool flag = true;
    if(size1 == size2){
        Node* temp1 = head1;
        Node* temp2 = head2;

        while(temp1 != NULL){
            if(temp1->val != temp2->val){
                flag = false;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    else{
        flag = false;
    }

    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}


// Using STL
// int main(){
//     list<int> l1;
//     list<int> l2;

//     while(1){
//         int val;
//         cin>>val;

//         if(val == -1){
//             break;
//         }
//         l1.push_back(val);
//     }
//     while(1){
//         int val;
//         cin>>val;

//         if(val == -1){
//             break;
//         }
//         l2.push_back(val);
//     }

//     if(l1==l2){
//         cout<<"YES";
//     }
//     else{
//         cout<<"NO";
//     }
//     return 0;
// }