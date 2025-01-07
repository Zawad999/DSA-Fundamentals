#include <bits/stdc++.h>
using namespace std;

class MyStack{
    public:
        vector<int> v;

        void push(int val){
            v.push_back(val);
        }
        void pop(){
            v.pop_back();
        }
        int top(){
            return v.back();
        }
        bool empty(){
            return v.empty();
        }
        int size(){
            return v.size();
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