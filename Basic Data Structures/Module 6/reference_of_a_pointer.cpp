#include <bits/stdc++.h>
using namespace std;

void fun(int*& p){  //this means this function takes a parameter only when the value passed is an integer pointer, not an integer, remember variable and pointer is two different thing, one is integer and another is integer pointer, 
    p = NULL; 
}

int main(){
    int x = 10;
    int* p = &x;
    cout<<p<<endl;
    fun(p);

    cout<<p;

    return 0;
}