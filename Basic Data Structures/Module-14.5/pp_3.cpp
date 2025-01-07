#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    int n_s;
    cin>>n_s;
    while(n_s--){
        int val;
        cin>>val;
        s.push(val);
    }

    stack<int> dummy;
    while(!s.empty()){
        dummy.push(s.top());
        s.pop();
    }
    while(!dummy.empty()){
        cout<<dummy.top()<<" ";
        dummy.pop();
    }
    return 0;
}