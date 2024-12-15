#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector <long long int>v;
    for(int i = 0; i<n; i++){
        long long int x;
        cin>>x;
        if(i!=0){
            v.push_back(x+v.back());
        }
        else{
            v.push_back(x);
        }
        
    }

    for(int i = n-1; i>=0; i--){
        cout<<v.at(i)<<" ";
    }

    
    return 0;
}