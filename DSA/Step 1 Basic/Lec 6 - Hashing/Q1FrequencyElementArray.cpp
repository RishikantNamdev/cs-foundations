/*
Q1. Count frequency of each element in the array.

Problem statement: Given an array, we have to found the number of occurrences of each element in the array.

Examples:

Example 1:
Input: arr[] = {10,5,10,15,10,5};
Output: 10  3
	     5  2
        15  1
Explanation: 10 occurs 3 times in the array
	      5 occurs 2 times in the array
              15 occurs 1 time in the array

Example2: 
Input: arr[] = {2,2,3,4,4,2};
Output: 2  3
	    3  1
        4  2
Explanation: 2 occurs 3 times in the array
	     3 occurs 1 time in the array
             4 occurs 2 time in the array
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    unordered_map<int, int> hash;
    int arr[n];
    cout<<"Enter the element of the array : ";
    for(int i = 0; i<n ; i++)
    {
        cin>>arr[i];
        hash[arr[i]]++;
    }

    //unordered map traversal.
    cout<<"Element      Frequency"<<endl;
    for(auto it : hash)
    {
        cout<<it.first<<"        ->        "<<it.second<<endl;
    }

    return 0;
}