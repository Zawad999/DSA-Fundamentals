#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l1;
    
    while (1)
    {
        int x;
        cin>>x;

        if(x == -1){
            break;
        }

        l1.push_back(x);
    }
    l1.sort();
    l1.unique();



    for(int x: l1){
        cout<<x<<" ";
    }

    
    return 0;
}
