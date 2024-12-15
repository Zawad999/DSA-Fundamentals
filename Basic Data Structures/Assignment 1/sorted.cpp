#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> v;

        int flag = 0;
        for(int i = 0; i<n; i++){
            int x;
            cin>>x;

            if(flag == 1){continue;}

            if((i!=0) && (x < v[i-1])){
                flag = 1;
            }
            else{
                v.push_back(x);
            }
        }

        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}