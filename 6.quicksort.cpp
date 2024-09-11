#include<bits/stdc++.h> 
using namespace std;

int partition(vector<int>&v, int lb, int ub){
    int pivot=v[lb];
    int l=lb;
    int r=ub;
    while(l<r){
        while(v[l]<=pivot){          //find largest value from left
            l++;
        }
        while(v[r]>pivot){           //find smallest value from right
            r--;
        }
        if(l<r){
            swap(v[l],v[r]);         // less than pivot  pivot   greater than pivot
        }
    }
    swap(v[lb],v[r]);
    return r;
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


//Best Case: Median (Mid element of sorted list)
//Always partitioning in the middle,selected pivot is median.

//Worst Case : sorted
//Always partitioning will be done in the beginning of the list.
