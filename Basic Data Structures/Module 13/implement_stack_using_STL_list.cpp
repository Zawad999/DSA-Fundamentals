#include <bits/stdc++.h>
using namespace std;

class MyStack{
    public:
        list<int> l;
        int sz = 0;

        void push(int val){
            l.push_back(val);
            sz++;
        }
        void pop(){
            l.pop_back();
            sz--;
        }
        int top(){
            return l.back();
        }
        bool empty(){
            return l.empty();
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