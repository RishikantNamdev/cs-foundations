/*
Q2. Find the highest/lowest frequency element.

Problem Statement: Given an array of size N. Find the highest and lowest frequency element.

Pre-requisite: Hashing Theory and  Counting frequencies of array elements

Examples:

Example 1:
Input: array[] = {10,5,10,15,10,5};
Output: 10 15
Explanation: The frequency of 10 is 3, i.e. the highest and the frequency of 15 is 1 i.e. the lowest.

Example 2:

Input: array[] = {2,2,3,4,4,2};
Output: 2 3
Explanation: The frequency of 2 is 3, i.e. the highest and the frequency of 3 is 1 i.e. the lowest.
*/

#include <iostream>
#include <unordered_map>
#include <climits>
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
    int maxFreq = INT_MIN;
    int minFreq = INT_MAX;
    int min,max;
    
    for(auto it : hash)
    {
        if(maxFreq < it.second)
        {
            maxFreq = it.second;
            max = it.first;
        }
        if(minFreq > it.second)
        {
            minFreq = it.second;
            min = it.first;
        }
    }

    cout<<"The highest frequency element is : "<<max<<endl;
    cout<<"The lowest frequency element is : "<<min<<endl;

    return 0;
}