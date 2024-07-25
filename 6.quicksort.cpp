#include<bits/stdc++.h> 
using namespace std;

int partition(vector<int>&v, int lb, int ub){
    int pivot=v[lb];
    int start=lb;
    int end=ub;
    while(start<end){
        while(v[start]<=v[end]){
            start++;
        }
        while(v[end]>pivot){
            end--;
        }
        if(start<end){
            swap(v[start],v[end]);
        }
    }
    swap(v[lb],v[end]);
    return end;
}

void quickSort(vector<int>&v, int lb, int ub){
    if(lb<ub){
        int pivotIndex=partition(v,lb,ub);
        quickSort(v,lb,pivotIndex-1);
        quickSort(v,pivotIndex+1,ub);
    }
}

int main(){

    int n; cin>>n;
    vector<int>v(n);
    for(auto &u:v) cin>>u;
    
    for(auto &u:v) cout<<u<<" ";
    cout<<endl;
    
    quickSort(v,0,n-1);

    cout<<endl;
    cout<<"*******************"<<endl;

    for(auto &u:v) cout<<u<<" ";
    cout<<endl;

    return 0;
}