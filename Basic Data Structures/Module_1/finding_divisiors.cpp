#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;

    for(int i = 1; i<=x/2; i++){  //time complexity O(n)
        if(x%i==0){
            cout<<i<<endl;
        }
    }

    for(int i = 1; i<=sqrt(x); i++){  //time complexity O(sqrt(n))
        if(x%i==0){
            cout<<i<<" "<<x/i<<" ";
        }
    }

    return 0;
}