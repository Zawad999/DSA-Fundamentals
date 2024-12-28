#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void insert_at_any_pos(Node *&head, Node *&tail, int indx, int val)
{

    if (indx == 0)
    {
        insert_at_head(head, tail, val);
        return;
    }

    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < indx; i++)
    {
        temp = temp->next;
    }

    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next = newNode;
    if (newNode->next == NULL)
    {
        tail = newNode;
        return;
    }
    newNode->next->prev = newNode;
}
void reverse_linked_list(Node *head, Node *tail)
{
    for (Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
    {
        swap(i->val, j->val);
    }
}

void sort_ascending(Node* head){
    for(Node* i = head; i->next!= NULL; i = i->next){
        for(Node* j = i->next; j!=NULL; j = j->next){
            if(j->val<i->val){
                swap(i->val, j->val);
            }
        }
    }
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *temp = tail;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
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
    
    sort_ascending(head1);

    print_linked_list(head1);

    


    return 0;
}

// ***Using STL doubly linked list***
// int main()
// {
//     list<int> l1;
//     while (1)
//     {
//         int val;
//         cin >> val;

//         if (val == -1)
//         {
//             break;
//         }
//         l1.push_back(val);
//     }

//     l1.sort();

//     for (int x : l1)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }