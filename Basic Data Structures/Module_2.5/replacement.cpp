#include <iostream>
#include <vector>
using namespace std;

int main(){

    int x;
    cin>>x;

    vector <int> v;
    for(int i = 0; i<x; i++){
        int l;
        cin>>l;
        if(l<0){
            v.push_back(2);
        }
        else if(l>0){
            v.push_back(1);
        }
        else{
            v.push_back(0);
        }
    }

    for(auto i: v){
        cout<<i<<" ";
    }

    return 0;
}