#include <bits/stdc++.h>
using namespace std;

class myStack{

    list<int> l;
    
    public:
    void push(int val){
        l.push_back(val);
    }    
    void pop(){
        l.pop_back();
    }
    bool empty(){
        return l.empty();
    }
    int top(){
        return l.back();
    }
        
};

class myQueue{
    list<int> l;
    
    public:
    void push(int val){
        l.push_back(val);
    }    
    void pop(){
        l.pop_front();
    }
    bool empty(){
        return l.empty();
    }
    int front(){
        return l.front();
    }
};

int main(){
    myStack s;
    myQueue q;

    

    int s_n, q_n;
    cin>>s_n>>q_n;

    bool flag = true;

    if(s_n!=q_n){
        flag = false;
    }

    while(s_n--){
        int x;
        cin>>x;
        s.push(x);
    }
    while(q_n--){
        int x;
        cin>>x;
        q.push(x);
    }

    if(!flag){
        cout<<"NO";
        return 0; 
    }

    while(!s.empty()){
        if(s.top()!=q.front()){
            flag = false;
            break;
        }
        s.pop();
        q.pop();
    }

    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}

