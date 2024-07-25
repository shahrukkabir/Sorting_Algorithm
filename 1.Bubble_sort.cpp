#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>v(n);
    for(auto &u:v) cin>>u;
    int pass=0;
    for(int i=0;i<n-1;i++){
        pass++;
        bool flag=0;
        for(int j=0;j<(n-1)-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
    cout << "After sorting  : ";
    for(auto &u:v) cout<<u<<" ";
    cout<<endl;
    cout <<"Number of pass : "<<pass<<endl;
    return 0;
}


                                                                                                                                    
//T.C : O(n^2)
//S.C : O(n)
