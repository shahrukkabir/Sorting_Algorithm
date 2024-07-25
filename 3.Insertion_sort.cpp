#include <bits/stdc++.h>
using namespace std;
int main(){

    int n; cin>>n;
    vector<int>v(n);
    for(auto &u:v) cin>>u;
    for(int i=1;i<n;i++){
        int val=v[i];
        int hole=i;
        while(hole>0 && v[hole-1]>val){
            v[hole]=v[hole-1];
            hole--;
        }
        v[hole]=val;
    }
    for(auto &u:v) cout<<u<<" ";
    cout<<endl;
    return 0;
}

//T.C:  O(n^2)
//S.C:  O(n)/O(1)


