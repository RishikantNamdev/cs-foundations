/*
Q2. Find Second Smallest and Second Largest Element in an array

Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

Example 1:
Input: [1,2,4,7,7,5]
Output: Second Smallest : 2
	Second Largest : 5
Explanation: The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

pair <int,int> second_largest(vector<int> &arr,int n)
{
    if(n < 2)   return {-1,-1};
    int max = INT_MIN;
    int second_max = INT_MIN;
    int min = INT_MAX;
    int second_min = INT_MAX;
    for(int &it : arr)
    {
        if(max < it)
        {
            second_max = max;
            max = it;
        }
        else if(it > second_max && it != max)
        {
            second_max = it;
        }

        
        if(min > it)
        {
            second_min = min;
            min = it;
        }
        else if(it < second_min && it != min)
        {
            second_min = it;
        }
    }
    return {second_max,second_min};
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

    auto p = second_largest(arr,n);

    cout<<"The second largest element in the array is : "<<p.first<<endl;
    cout<<"The second Smallest element in the array is : "<<p.second<<endl;

    return 0;
}