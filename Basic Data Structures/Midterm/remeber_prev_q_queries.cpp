#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    list<int>l1;
    while(q--){
        long long x,v;
        cin>>x>>v;

        if(x==0){
            l1.push_front(v);
        }
        else if(x==1){
            l1.push_back(v);
        }
        else if(x==2){
            if(v<=l1.size()){
                cout<<"entered";
                l1.erase(next(l1.begin(),v));
            }
        }

        cout<<"L -> ";
        for(list<int>::iterator i = l1.begin(); i != l1.end(); i++){
            cout<<*i<<" ";
        }
        cout<<endl;

        cout<<"R -> ";
        for(list<int>::reverse_iterator i = l1.rbegin(); i != l1.rend(); i++){
            cout<<*i<<" ";
        }
        cout<<endl;

    }
}