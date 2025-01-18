// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     //when you want to keep two data as a pair
//     //like raking and his age
//     //I know we can create it using class
//     //but c++ alread created it using templace

//     // pair<int, int> p; //you can make pair of any data type with any other data type, it's handeled by standard template library internally


//     // //to create a pair 
//     // p =  make_pair(2,3);

//     // //to access the first element of pair we call the objects member first
//     // //to access the second element of pair we call the objects member second

//     // cout<<p.first<<endl;
//     // cout<<p.second<<endl;

//     // //another way to create pair
//     // pair<string, int> p1;
//     // p1 = {"Azmine's age: ", 25};

//     // cout<<p1.first;
//     // cout<<p1.second;

    

//     int n;
//     cin>>n;
//     vector <pair<int,int>> v (n);
//     for(int i =0; i<n; i++){
//         cin>>v[i].first>>v[i].second;
//     }

//     for(auto k: v){
//         cout<<k.first<<" "<<k.second<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h> 

using namespace std;


    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };



int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue<pair<TreeNode<int>*, int>> q;
}
