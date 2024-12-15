#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    
    int sum;
    for(int i = 1; i<=n; i++){  //time complexity O(N)
        sum+=i;
    }
    cout<<sum<<endl;;

    sum = (n*(n+1)/2); //time complexity O(1)
    cout<< sum;


    return 0;
}