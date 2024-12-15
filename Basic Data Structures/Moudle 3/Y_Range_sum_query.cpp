#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n,q;
    cin>>n>>q;

    vector<long long> v(n);
    
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(i!=0){
            v[i]=(v[i-1]+x);
        }
        else{
            v[0] = x;
        }
    }

    while(q--){
        int L, R;
        cin>>L>>R;
        --L;
        --R;

        if(L!=0){
            
            cout<<v[R]-v[L-1]<<endl;
        }
        else{
            cout<<v[R]<<endl;
        }
    }

    return 0;
}