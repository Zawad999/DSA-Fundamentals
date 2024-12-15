#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int>a;
    while(n--){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    
    int m;
    cin>>m;
    vector<int>b;
    while(m--){
        int temp;
        cin>>temp;
        b.push_back(temp);
    }
   
    int x;
    cin>>x;

    a.insert(a.begin()+x, b.begin(), b.end());

    for(int temp: a){
        cout<<temp<<" ";
    }
    
    return 0;
}