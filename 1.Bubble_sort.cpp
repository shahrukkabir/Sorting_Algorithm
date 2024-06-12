//c++ program : Bubble sort
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the number of element you want to sort : ";
    int n; cin >> n;
    cout << "Now Enter those element separated by space: ";
    int arr[n];
    for (int i=0;i<n;i++){                                   //T.C : O(n^2)
        cin>>arr[i];                                         //S.C : O(n)
    }
    int pass=0;
    for (int i=0;i<n-1;i++){
        pass++;
        bool flag = 0;
        for (int j=0;j<(n-1)-i;j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j],arr[j+1]);              //int temp = arr[j];
                flag=1;                             //arr[j] = arr[j + 1];
            }                                       //arr[j + 1] = temp;
        }
        if (flag==0){
            break;
        }
    }

    cout << "After sorting : ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    cout << "Number of pass = " << pass << endl;
    return 0;
}

                                                                    
                                                                    
                                                                   


