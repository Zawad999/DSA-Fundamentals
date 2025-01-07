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

    queue<int>q;
    int n_q;
    cin>>n_q;
    while(n_q--){
        int val;
        cin>>val;
        q.push(val);
    }
    

    if(n_s!=n_q){
        cout<<"NO";
        return 0;
    }

    bool flag = true;
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