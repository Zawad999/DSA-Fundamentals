#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;

    vector<int> v(26,0);

    for(auto i = 0; i<s.size(); i++){
        int j = s[i]-'a';
        v[j]++;
    }

    for(auto i = 0; i<v.size(); i++){
        
        if(v[i]!=0){
            char c = i+'a';
            cout<<c<<" : "<<v[i]<<endl;
        }
    }
    
    
    return 0;
}