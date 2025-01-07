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

class MyQueue{
        public:
        Node* head = NULL; //first person                                                                                                
        Node* tail = NULL; //last person
        int sz = 0;

        void push(int val){
            Node* newNode = new Node(val);
            sz++;
            if(head == NULL){
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;

        }  

        void pop(){
            if(head == NULL){
                return;
            }
            Node* del = head;
            head = head->next;
            delete del;
            sz--;
            if(head == NULL){
                tail = NULL;
                return;
            }
            
            head->prev = NULL;
        }    

        int front(){
            return head->val;
        }
        int back(){
            return tail->val;
        }
        bool empty(){
            return head == NULL;
        }
        int size(){
            return sz;
        }
};

int main(){

    MyQueue q;

    while(1){
        int val;
        cin>>val;

        if(val == -1){
            break;
        }
        q.push(val);
        cout<<"Q Back: "<<q.back()<<endl;
    }

    //Printing a queue

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }


    return 0;
}