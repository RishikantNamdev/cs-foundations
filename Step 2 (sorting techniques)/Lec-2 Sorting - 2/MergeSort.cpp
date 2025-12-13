/*

*/

#include <bits/stdc++.h>
using namespace std;
// Function to merge two halves of the array
void Merge(vector<int> &arr, int low, int mid, int high)
{
    // Create temp arrays
    vector<int> temp;
    temp.reserve(high - low + 1);
    int left = low;
    int right = mid+1;

    // Merge two sorted halves
    while(left <= mid && right <= high)
    {
        if(arr[left] < arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements from left half
    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements from right half
    while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy sorted elements back to original array
    for(int i = low; i <= high; i++)
    {
        arr[i] = temp[i-low];
    }
}

// Recursive merge sort function
void MergeSort(vector <int> &arr,int low,int high)
{
    if(low >= high) return;

    // Find the middle index
    int mid = (low + high)/2;

    // Recursively sort left half
    MergeSort(arr,low,mid);

    // Recursively sort right half
    MergeSort(arr,mid+1,high);

    // Skip merge if already sorted
    if (arr[mid] <= arr[mid + 1]) return;

    // Merge the two sorted halves
    Merge(arr,low,mid,high);
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

    MergeSort(arr,0,n-1);

    cout<<"Array after merge sort : ";
    for(int &it : arr)
    {
        cout<<it<<" ";
    }
    return 0;
}