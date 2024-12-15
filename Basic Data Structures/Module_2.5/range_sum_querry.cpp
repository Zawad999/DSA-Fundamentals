#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N, Q;
    cin>>N>>Q;

    vector<int> v(N);

    for(int i = 0; i<N; i++){
        cin>>v[i];
    }

    for(int i = 0; i<Q; i++){ //O(N)
        int L, R;
        cin>>L>>R;
        int sum =0;
        for(int j = L-1; j<R; j++){ //O(N)
            sum+=v[j];
        }
        cout<<sum<<endl;
    }

    return 0;
}