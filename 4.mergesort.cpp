#include<bits/stdc++.h>
using namespace std;

int a[]={0,3,2,4,1,8,5,6,2};

void merge(int l, int mid, int r){
    int p = l; 
    int q = mid+1;
    int len = r-l+1;

    vector<int>v(len);
    int k=0;
    for(int i=l;i<=r;i++){
        if(p>mid){
            v[k]=a[q];
            k++,q++;
        }
        else if(q>r){                  //T.C: n*log2(n)
            v[k]=a[p];                 //S.C: O(n)
            k++,p++;
        }
        else if(a[p]<=a[q]){
            v[k]=a[p];
            k++,p++;
        }
        else{
            v[k]=a[q];
            k++,q++;
        }
    }
    k=0;
    for(int i=l;i<=r;i++){
        a[i]=v[k];
        k++;
    }
}

void mergeSort(int l, int r){

    cout<<l<<" "<<r<<endl;

      if(l<r)
      {
           int mid = (l+r)/2;
           mergeSort(l,mid);
           mergeSort(mid+1,r);
           merge(l,mid,r);
       
           for(int i=1;i<=8;i++){
               cout<<a[i]<<" ";
           }
           cout<<endl;
     }
}

int main(){
    mergeSort(1,8);
    cout<<endl;
    cout<<"*******************"<<endl;

    for(int i=1;i<=8;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
    return 0 ;
}

/* 
void merge(int l, int mid, int r){
    int p = l; 
    int q = mid+1;
    int len = r-l+1;

    vector<int>v;
    for(int i=l;i<=r;i++){
        if(p>mid){
            v.push_back(a[q]);
            q++;
        }
        else if(q>r){  
           v.push_back(a[p]);
            p++;
        }
        else if(a[p]<=a[q]){
            v.push_back(a[p]);
            p++;
        }
        else{
            v.push_back(a[q]);
            q++;
        }
    }
    int k=0;
    for(int i=l;i<=r;i++){
        a[i]=v[k];
        k++;
    }
} 
*/

/* 
void mergeSort( int l, int r )
{
    if ( l == r ) return;
    int mid = ( l + r ) / 2;
    mergeSort( l, mid );
    mergeSort( mid+1, r );
    merge ( l, mid, r );
}  
*/      
