#include <bits/stdc++.h>
using namespace std;

class MyStack{
    public:
    vector<int>v;

    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    int empty(){
        return v.empty();
    }
};

int main(){
    MyStack s1;
    int n_s1;
    cin>>n_s1;
    while(n_s1--){
        int val;
        cin>>val;
        s1.push(val);
    }

    MyStack s2;
    int n_s2;
    cin>>n_s2;
    while(n_s2--){
        int val;
        cin>>val;
        s2.push(val);
    }
    

    if(s1.size()!=s2.size()){
        cout<<"NO";
        return 0;
    }

    bool flag = true;
    while(!s1.empty()){
        if(s1.top()!=s2.top()){
            flag = false;
            break;
        }
        s1.pop();
        s2.pop();
    }

    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    


    return 0;
}