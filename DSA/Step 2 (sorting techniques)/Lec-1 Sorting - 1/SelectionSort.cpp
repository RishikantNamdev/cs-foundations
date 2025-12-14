/*
1. Selection Sort Algorithm.

You divide the array into two parts — the sorted part at the start, and the unsorted part that’s left over. Then, step by step, you select the smallest element from the unsorted part and swap it with the first unsorted element.

Let’s say you have this array:
[5, 3, 8, 4, 2]

Now, step through it:

1.First pass: smallest element in [5, 3, 8, 4, 2] is 2.
Swap it with the first element → [2, 3, 8, 4, 5]

2.Second pass: now look at [3, 8, 4, 5].
Smallest is 3. It’s already in place → [2, 3, 8, 4, 5]

3.Third pass: look at [8, 4, 5].
Smallest is 4. Swap with 8 → [2, 3, 4, 8, 5]

4.Fourth pass: look at [8, 5].
Smallest is 5. Swap with 8 → [2, 3, 4, 5, 8]

Done.

So each time, you select the minimum element and move it to its correct spot.

Complexity:

Time: 
𝑂(𝑛2) (because for every element, you scan the rest to find the smallest)

Space: 𝑂(1) (it sorts in place)

It’s not stable — meaning equal elements might get reordered.


Problem Statement: Given an array of N integers, write a program to implement the Selection sorting algorithm.

Examples:

Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting the array is: 9, 13, 20, 24, 46, 52

Example 2:
Input: N=5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting the array is: 1, 2, 3, 4, 5
*/

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n)
{
    for(int i = 0; i <= n-2; i++)
    {
        int min = i;
        for(int j = i; j<= n-1; j++)
        {
            if(arr[min] > arr[j])
                min = j;
        }
        swap(arr[min],arr[i]);
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

    selection_sort(arr,n);

    cout<<"Array after sorting : ";
    for(int i = 0; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}