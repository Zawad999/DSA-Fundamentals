#include <iostream>

using namespace std;

class Node{
    public:
        int val;
        Node* next;
};

int main(){

    Node a,b,c;

    a.val = 10;
    b.val = 20;
    c.val = 30;

    a.next =  &b;
    b.next = &c;
    c.next = NULL;

    cout<<a.val<<"->"<<a.next->val<<"->"<<(a.next->next)->val;

    return 0;
}