#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int l, int mid, int r){
    int p = l; 
    int q = mid+1;
    int len = r-l+1;

    vector<int>v2;
    for(int i=l;i<=r;i++){
        if(p>mid){
            v2.push_back(v[q]);
            q++;
        }
        else if(q>r){  
           v2.push_back(v[p]);
            p++;
        }
        else if(v[p]<=v[q]){
            v2.push_back(v[p]);
            p++;
        }
        else if(v[q]<=v[p]){
            v2.push_back(v[q]);
            q++;
        }
    }
    int k=0;
    for(int i=l;i<=r;i++){
        v[i]=v2[k];
        k++;
    }
} 

void mergeSort(vector<int>&v, int l, int r){

    if(l<r){
        int mid = (l+r)/2;
        mergeSort(v,l,mid);
        mergeSort(v,mid+1,r);
        merge(v,l,mid,r);
    }

}


int main(){

    int n; cin>>n;
    vector<int>v(n);
    for(auto &u:v) cin>>u;
    
    for(auto &u:v) cout<<u<<" ";
    cout<<endl;

    mergeSort(v,0,n-1);

    cout<<endl;
    cout<<"*******************"<<endl;

    for(auto &u:v) cout<<u<<" ";

    cout<<endl;
    return 0 ;
}












