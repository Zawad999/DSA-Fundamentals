#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int> v;

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        if(i!=0){
            v.push_back(v[i-1]+x);
        }
        else{
            v.push_back(x);
        }
    }


    int total  = v[n-1];
    int eq_in = 0;
    for(int  i = 1; i<n-1; i++){
        if(v[i-1] == total-v[i]){
            eq_in = i;
            break;
        }
    }

    if(eq_in){
        cout<<eq_in<<endl;
    }
    else{
        cout<<"No such index exist"<<endl;
    }
    
    return 0;
}