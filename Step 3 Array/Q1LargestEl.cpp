/*
Q1. Find the Largest element in an array

Problem Statement: Given an array, we have to find the largest element in the array.

Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 5
Explanation: 5 is the largest element in the array. 

Example2: 
Input: arr[] = {8,10,5,7,9};
Output: 10
Explanation: 10 is the largest element in the array. 
*/

#include <iostream>
#include <vector>
using namespace std;

//using recurtion.

int LargeRecur(vector<int> &arr,int max,int i)
{
    if(1 == arr.size())    return max;
    if(max < arr[i])
        max = arr[i];
    return LargeRecur(arr,max,i+1);
}

//Using linear approach.    TC = O(N);
int LargestEl(vector <int> &arr)
{
    int max = arr[0];
    for(int &it : arr)
    {
        if(max < it)
            max = it;
    }
    return max;
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

    cout<<"Largest element in the given array using loop(linear where we traverse each element 1 by 1) approch : "<<LargestEl(arr)<<endl;
    cout<<"Largest element in the given array Recursive approch : "<<LargeRecur(arr,arr[0],0)<<endl;

    return 0;
}