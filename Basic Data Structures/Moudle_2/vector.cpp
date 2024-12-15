#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    //Vector Initialization
    // vector <int> v;
    // vector <int> v1(5); //v1 initialized to 5 elements with 0
    // vector <int> v2(N, v); //v2 initialized to N elements, with value v;
    // vector <int> v3(v2); //v3 vector by copying v2 vector in it
    // int arr[] =  {12,23,239,2};
    // vector <int> v(arr, arr+4);

    // cout<<v.at(3);


    //vector capacity
    // vector <int> v;
    // v.push_back(2);
    // cout<<v.capacity()<<endl;
    // v.push_back(3);
    // cout<<v.capacity()<<endl;
    // v.push_back(4);
    // cout<<v.capacity()<<endl;
    // v.push_back(5);
    // cout<<v.capacity()<<endl;
    // v.push_back(6);
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;
    // v.push_back(6);
    // cout<<v.capacity()<<endl;
    // cout<<v.max_size();
    // cout<<v.size()<<endl;
    // v.resize(3);
    // cout<<v.size()<<endl;

    //vectror modifiers
    // vector <int> v = {12,23,2,12};
    // vector <int> v2;
    // cout<<v.size()<<endl;
    // cout<<v2.size()<<endl;
    // v2 = v; //time complexity O(N) cause both vector have different size
    // cout<<v2.size()<<endl;
    // v2.pop_back();
    // cout<<v2.size()<<endl;

    // for(auto x: v2){
    //     cout<<x<<" ";
    // }
    // cout<<endl;

    // v2.insert(v2.begin()+2, 12);
    // for(auto x: v2){
    //     cout<<x<<" ";
    // }
    // cout<<endl;

    
    // for(auto x: v){
    //     cout<<x<<" ";
    // }
    // cout<<endl;

    // v2.insert(v2.begin()+1, v.begin(), v.end()-2);
    // for(auto x: v2){
    //     cout<<x<<" ";
    // }
    // cout<<endl;

    // v.erase(v.begin()+2);  //delete element from the 2nd index, 0,1,2
    // v.erase(v.begin()+1, v.end());//delete elements from frist index, 0,1th to last index, meaning till before the plade where the end pointer is pointing to

    vector <int> v = {12,23,2,12};
    vector <int> v2;

    // replace(v.begin(), v.end(), 12, 0); 
    // for(auto x: v){
    //     cout<<x<<" ";
    // }
    // cout<<endl;

   
   
   for(vector<int>::iterator i = v.begin(); i!=v.end(); i++){
        cout<<*i<<" ";
   }
    
    return 0;
}