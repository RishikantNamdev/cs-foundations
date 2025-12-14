/*
2. Bubble Sort Algorithm.
{ push max element to the last by adjacent swapping.
 
You go through the array multiple times. In each pass, you compare adjacent elements, 
and if they’re in the wrong order, you swap them. After each full pass, the largest element “bubbles up” to the end.

Example:
[5, 3, 8, 4, 2]

Pass 1

Compare 5 & 3 → swap → [3, 5, 8, 4, 2]

Compare 5 & 8 → no swap

Compare 8 & 4 → swap → [3, 5, 4, 8, 2]

Compare 8 & 2 → swap → [3, 5, 4, 2, 8]
→ biggest element (8) is now at the end.

Pass 2

Compare 3 & 5 → ok

Compare 5 & 4 → swap → [3, 4, 5, 2, 8]

Compare 5 & 2 → swap → [3, 4, 2, 5, 8]
→ next biggest (5) in place.

Pass 3

Compare 3 & 4 → ok

Compare 4 & 2 → swap → [3, 2, 4, 5, 8]

Pass 4

Compare 3 & 2 → swap → [2, 3, 4, 5, 8]

Sorted.

Complexity:

Time:
O(n2)

Space:
O(1)

Can be made a bit better by stopping early if no swaps happen in a pass (means array is already sorted).

It is stable, because equal elements don’t jump over each other.
}


Problem Statement: Given an array of N integers, write a program to implement the Bubble Sorting algorithm.

Examples:

Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting we get 9,13,20,24,46,52


Input: N = 5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting we get 1,2,3,4,5
*/

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n)
{
    for(int i = n-1; i >= 1; i--)
    {   bool isswap = false;
        for(int j = 0; j <= i-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isswap = true;
            }
        }
        if(!isswap)
            break;
    }
}

int main()
{
    int n;
    cout<<"Enter the no. of element in the array : ";
    cin>>n;

    int arr[n];

    cout<<"Enter the element of the array : ";
    for(int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }

    bubble_sort(arr,n);

    cout<<"Array after sorting : ";
    for(int i = 0; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}