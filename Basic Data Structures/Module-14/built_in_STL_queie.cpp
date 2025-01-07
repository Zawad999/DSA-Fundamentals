#include <bits/stdc++.h>
using namespace std;

int main(){

    queue<int> q;

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