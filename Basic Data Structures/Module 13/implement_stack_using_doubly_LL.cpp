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

class MyStack{
    public:

        //we don't need head for stack
        //we keep track of everything using tail, cause it says stack
        Node* tail = NULL;
        int sz = 0;
        void push(int val){
            Node* newNode = new Node(val);
            sz++;
            if(tail == NULL){
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        void pop(){
            if(tail == NULL){
                return;
            }
            Node* del = tail;
            tail = tail->prev;
            tail->next = NULL;
            delete del;
            sz--;
        }
        int top(){
            return tail->val;
        }
        bool empty(){
            return tail == NULL;
        }
        int size(){
            return sz;
        }
};


int main(){
    int n;
    cin>>n;

    MyStack st;
    while(n--){
        int x;
        cin>>x;
        st.push(x);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}