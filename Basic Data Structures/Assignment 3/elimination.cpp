#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        string str;
        cin>>str;

        stack<char>s;

        for(char c: str){
            if(c=='0'){
                s.push(c);
            }
            else if(c=='1'&& !s.empty() && s.top()=='0'){
                s.pop();
            }
            else{
                s.push(c);
            }
        }
        if(s.empty()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}