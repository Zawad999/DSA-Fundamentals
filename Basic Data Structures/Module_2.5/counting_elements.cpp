#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int x;
    cin>>x;

    
    vector <int> v(x);
    for(int i = 0; i<x; i++){
        cin>>v[i];
    }

    int count=0;
    for(auto i: v){
        vector<int>::iterator it = find(v.begin(), v.end(), i+1);
        if(it!=v.end()){
            count++;
        }
    }
    cout<<count;
    
    return 0;
}