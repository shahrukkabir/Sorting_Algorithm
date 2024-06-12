// Sorting using insertion algorithm
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {8, 4, 1, 3, 2};
    
    for (int i = 1; i < 5; i++){
        int value = a[i];
        int hole = i;

        while (hole > 0 && a[hole - 1] > value)
        {
            a[hole] = a[hole - 1];
            hole--;
        }
        a[hole] = value;
    }
    cout << "Sorted array : " << endl;
    for (int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
    return 0;
}

//T.C:  O(n^2)
//S.C:  O(n)/O(1)