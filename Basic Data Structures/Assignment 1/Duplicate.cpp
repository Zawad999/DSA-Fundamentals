#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector <long long int>v;
    for(int  i = 0; i<n; i++){
        long long int x;
        cin>>x;
        v.push_back(x);
    }


    sort(v.begin(), v.end());
    
    
    int flag = 0;
    
    for(int  i = 0; i<n-1; i++){

        if(v[i] == v[i+1]){
            flag = 1;
            break;
        }
    }

    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}