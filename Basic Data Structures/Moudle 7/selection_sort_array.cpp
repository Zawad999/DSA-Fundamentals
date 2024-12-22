#include <bits/stdc++.h>
using namespace std;

void sort_array(int* arr, int n){
    
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout<<endl;
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    for(int x: arr){
        cout<<x<<" ";
    }
    sort_array(arr,n);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}