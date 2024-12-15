#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector <int> v;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());  //nlogn

    int x;
    cin>>x;

    int L = 0, R = n-1;
    int flag = 0;
    while(L<=R){
        
        int mid = (L+R)/2;

        if(x==v[mid]){
            flag = 1;
            break;
        }
        else if(x<v[mid]){
            R = mid-1;
        }
        else if(x>v[mid]){
            L = mid+1;
        }
    }

    if(flag){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    

    return 0;
}