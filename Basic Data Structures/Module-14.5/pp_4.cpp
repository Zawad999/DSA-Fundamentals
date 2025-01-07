#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    stack<int> s;

    int n;
    cin>>n;

    while(n--){
        int val;
        cin>>val;
        s.push(val);
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}