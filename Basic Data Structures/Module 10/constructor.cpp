#include <bits/stdc++.h>
using namespace std;

int main(){

    // list<int> l;
    // list<int> l(10,4);
    // cout<<l.size()<<endl;
    // cout<<l.max_size()<<endl;
    // cout<<l.empty()<<endl;

    // list<int> l2(10,8);
    // list<int> l(l2);
    // cout<<l.size()<<endl;
    // cout<<l.max_size()<<endl;
    // cout<<l.empty()<<endl;
    
    // int arr[] = {1,2,3,4};
    // list<int> l(arr, arr+4);
    // cout<<l.size()<<endl;
    // cout<<l.max_size()<<endl;
    // cout<<l.empty()<<endl;
    
    // vector <int> v(10,2);
    // list<int> l(v.begin(), v.end());
    // cout<<l.size()<<endl;
    // cout<<l.max_size()<<endl;
    // cout<<l.empty()<<endl;
    
    // vector <int> v(10,2);
    // list<int> l(v.begin(), v.end());
    // cout<<l.size()<<endl;
    // cout<<l.max_size()<<endl;
    // cout<<l.empty()<<endl;

    // for(int x: l){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // for(list<int>::iterator it = l.begin(); it!=l.end(); it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    // l.resize(2);
    // for(list<int>::iterator it = l.begin(); it!=l.end(); it++){
    //     cout<<*it<<" ";
    // }    
    // cout<<endl;

    // l.resize(4);
    // for(list<int>::iterator it = l.begin(); it!= l.end(); it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    // l.clear();
    // cout<<l.empty()<<endl;

    // list <int> l1(11,9);
    // list <int> l2;
    // l2 = l1;

    // l2.push_back(12);
    // cout<<l1.size()<<endl;
    // cout<<l2.size()<<endl;
    // l2.push_back(12321);
    // cout<<*next(l2.begin(), 11); //here with next you access the address of the 
    

    list<int> l{8, 9, 123,12, 99, 99 , 99};
    for(list<int>::iterator it = l.begin(); it!= l.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    list<int> l2 = {123,2,12,1};
    l.insert(next(l.begin(), 3), l2.begin(), l2.end());
    for(list<int>::iterator it = l.begin(); it!= l.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    replace(l.begin(), l.end(), 99, 0);
    for(list<int>::iterator it = l.begin(); it!= l.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    list<int>::iterator it = find(l.begin(), l.end(), 12);

    if(it == l.end()){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"found"<<endl;
    }

    l.remove(0);
    for(list<int>::iterator it = l.begin(); it!= l.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // l.erase(next(l.begin(),3));
    // for(list<int>::iterator it = l.begin(); it!= l.end(); it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    // l.erase(next(l.begin(),3), next(l.begin(),5));
    // for(list<int>::iterator it = l.begin(); it!= l.end(); it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    l.sort(greater<int>());
    for(list<int>::iterator it = l.begin(); it!= l.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    l.unique();
    for(list<int>::iterator it = l.begin(); it!= l.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}