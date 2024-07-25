#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u:v) cin>>u;
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_index]){
                min_index=j;
            }
        }
        swap(v[i],v[min_index]);
    }
    for(auto &u:v) cout<<u<<" ";
    cout<<endl;
    return 0;
}














