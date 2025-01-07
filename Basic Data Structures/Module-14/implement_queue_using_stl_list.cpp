#include <bits/stdc++.h>
using namespace std;


class MyQueue{
        public:
        list<int> l;

        void push(int val){
            l.push_back(val);
        }  

        void pop(){
            l.pop_front();
        }    

        int front(){
            return l.front();
        }
        int back(){
            return l.back();
        }
        bool empty(){
            return l.empty();
        }
        int size(){
            return l.size();
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
    cout<<"Size: "<<q.size()<<endl;
    //Printing a queue

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }


    return 0;
}