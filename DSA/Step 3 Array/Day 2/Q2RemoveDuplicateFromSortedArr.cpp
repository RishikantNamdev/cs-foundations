/*
Q2) 🔹 Problem 2 — Remove Duplicates from Sorted Array
Problem Statement (clarified)

You are given a sorted array arr of size n.

Your task is to remove duplicate elements in-place such that:

Each unique element appears only once

The relative order of elements is maintained

No extra array is used for unique elements

You must return:

The number of unique elements k

The first k elements of the array should contain the unique values.

Key Constraints (important)

The array is already sorted

You must do it in O(n) time

Extra space should be O(1)

You are allowed to overwrite values inside the same array.
*/

#include <iostream>
#include <vector>
using namespace std;

// this was my first failed approach 
// int remove_duplicates(vector<int> &arr)
// {
//     int n = arr.size();
//     if(n < 2)
//         return n;

//     int ue = 0;
//     bool all_UE = true;
//     for(int i = 1; i < n; i++)
//     {
//         if(arr[ue] != arr[i])
//             ue++;
//         else if(arr[++i] != arr[ue])
//         {
//             arr[++ue] = arr[i];
//             all_UE = false;
//         }
//     }

//     if(all_UE == true)  return n;
//     else   return ue;
// }

//this is the approach Successfully sold this problem.
int remove_duplicates(vector<int>& arr)
{
    int n = arr.size();
    if (n == 0) return 0;

    int k = 1; // index for next unique element

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[k - 1])
        {
            arr[k] = arr[i];
            k++;
        }
    }

    return k;
}


int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the element of the array : ";
    for(int &it : arr)
    {
        cin>>it;
    }
    
    cout<<"The Number of unique element are : "<<remove_duplicates(arr)<<endl;
    cout<<"The final reformated array : ";
    for(int &it : arr)
    {
        cout<<it<<" ";
    }

    return 0;
}