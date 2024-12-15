#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    for(int i = 0; i<n; i++){

        for(int j = 0; j<n; j++){

            if((i == (n-1)/2)&& i==j){
                cout<<"X";
                break;
            }

            if(j == i){
                cout<<"\\";
            }
            else if((j == (n-1)-i)){
                cout<<"/";
                break;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}