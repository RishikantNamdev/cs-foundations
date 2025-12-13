#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Function to partition the array
int partition(vector<int>& arr, int low, int high)
{
    int pivot = arr[low];  // choose first element as pivot
    int i = low;
    int j = high;

    // move elements around pivot
    while (i < j)
    {
        // move i right until element > pivot
        while (i <= high - 1 && arr[i] <= pivot)
            i++;

        // move j left until element <= pivot
        while (j >= low + 1 && arr[j] > pivot)
            j--;

        // swap out-of-place elements
        if (i < j)
            swap(arr[i], arr[j]);
    }

    // place pivot at correct position
    swap(arr[low], arr[j]);
    return j;  // pivot index
}

// Function to perform quicksort
void quickSort(vector <int> &arr, int low, int high)
{   
    // Base case: if low is not less than high
    if (low < high) {
        // Find pivot index after partitioning
        int pivotIndex = partition(arr, low, high);

        // Recursively sort elements before pivot
        quickSort(arr, low, pivotIndex - 1);

        // Recursively sort elements after pivot
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main()
{
    int n;
    cout<<"Enter the no. of element in the array : ";
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter the element of the array : ";
    for(int &it : arr)
    {
        cin>>it;
    }

    quickSort(arr,0,n-1);

    cout << "Array after quick sort : ";
    for(int &it : arr)
    {
        cout<<it<<" ";
    }
    return 0;
}