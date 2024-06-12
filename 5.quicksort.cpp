#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int lb, int ub)
{
    int pivot = arr[lb]; // select first element as a pivot
    int start = lb;
    int end = ub;

    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        { 
            end--;
        }
        if (start < end)
        {
            swap(arr[start], arr[end]);
        }
    }

    swap(arr[lb], arr[end]);
    return end;
} 


void quickSort(vector<int> &arr, int lb, int ub)
{
    if (lb < ub)
    {
        int pivotIndex = partition(arr, lb, ub);

        quickSort(arr, lb, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, ub);
    }
}

int main()
{
    vector<int> arr = {89, 60, -7, -10, 7, 8, 100, 0 , 9, 1, 5};
    int n = arr.size();

    cout << "Original array: ";
    for (int num : arr){
        cout << num << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "Sorted array:  ";
    for (int num : arr){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
