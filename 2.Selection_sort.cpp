#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements you want to sort: ";
    cin >> n;
    int a[n];
    cout << "Now enter the elements separated by space: ";
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++){
        int min_index = i;
        for (int j = i + 1; j < n; j++){
            if (a[j] < a[min_index]){
                min_index = j;
            }
        }
        swap(a[i],a[min_index]);
    }
    cout << "Sorted elements: ";
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}
