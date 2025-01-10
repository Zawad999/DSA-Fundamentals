#include <bits/stdc++.h>
using namespace std;

int main(){
    

    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        stack<char> s;
        for(int i = 0; i<str.size(); i++){
            if(!s.empty() && str[i]!=s.top()){
                s.pop();
            }
            else{
                s.push(str[i]);
            }
        }

        if(s.empty()){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}