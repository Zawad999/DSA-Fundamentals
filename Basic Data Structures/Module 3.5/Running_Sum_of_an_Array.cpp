#include <bits/stdc++.h>

using namespace std;

void running_sum(vector<int>& v){
    for(int i = 0; i<v.size(); i++){
        if(i!=0){
            v[i] = v[i]+v[i-1];
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v;

    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }

    running_sum(v);

    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}