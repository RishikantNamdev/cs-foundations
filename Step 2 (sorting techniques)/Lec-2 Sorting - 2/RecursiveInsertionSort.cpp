/*
Q. Recursive Insertion Sort Algorithm

Problem Statement: Given an array of N integers, write a program to implement the Recursive Insertion Sort algorithm.

Examples:

Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: After sorting we get 9,13,20,24,46,52

Example 2:
Input: N = 5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting we get 1,2,3,4,5
Solution
Disclaimer: Don't jump directly to the solution, try it out yourself first.

Solution:
We have already solved this problem using the iterative method. To learn that approach,
refer to the article: Insertion Sort Algorithm. In this article, we will solve this problem using recursion instead of using the loop.

Approach: 
In the iterative method, we did the following:

Take an element from the unsorted array(using an outer loop).
Place it in its corresponding position in the sorted part(using an inner loop).
Shift the remaining elements accordingly.
Now, in the recursive approach, we will just select the element recursively instead of using any loop.
This is the only change we will do the recursive insertion sort algorithm and the rest of the part will be completely the same as it was in the case of iterative insertion sort.

The approach will be the following:

First, call the recursive function with the given array, the size of the array, and the index of the selected element(let's say i).
Inside that recursive function, take the element at index i from the unsorted array.
Then, place the element in its corresponding position in the sorted part(using swapping).
After that, Shift the remaining elements accordingly.
Finally, call the recursion increasing the index(i) by 1.
The recursion will continue until the index reaches n(i.e. All the elements are covered).
Base Case: if(i == n) return;
Dry Run:
The purple color represents the unsorted array.
The yellow color represents the current element that needs to be placed in the appropriate position.
The green color represents the sorted array.
Recursion 1-(insertion_sort(arr, 0, n))-(selected index i = 0): The element at index i=0 is 13 and there is no other element on the left of 13. So, 
currently, the subarray up to the first index is sorted as it contains only element 13.


Recursion 2-(insertion_sort(arr, 1, n))-(selected index i = 1):The selected element at index i=1 is 46. Now, 
we will try to move leftwards and put 46 in its correct position. Here, 46 > 13 and so 46 is already in its correct position. Now, 
the subarray up to the second index is sorted.


Recursion 3-(insertion_sort(arr, 2, n))-(selected index i = 2):The selected element at index i=2 is 24. Now, 
we will try to move leftwards and put 24 in its correct position. Here, the correct position for 24 will be index 1. 
So, we will insert 24 in between 13 and 46. We will do it by swapping 24 and 46. Now, the subarray up to the third index is sorted.


Recursion 4-(insertion_sort(arr, 3, n))-(selected index i = 3):The selected element at index i=3 is 52. Now, 
we will try to move leftwards and put 52 in its correct position. Here, the correct position for 52 will be index 3. 
So, we need not swap anything. Now, the subarray up to the fourth index is sorted.


Recursion 5-(insertion_sort(arr, 4, n))-(selected index i = 4):

The selected element at index i=4 is 20. Now, we will try to move leftwards and put 20 in its correct position. 
Here, the correct position for 20 will be index 1. So, we need to swap adjacent elements until 20 reaches index 1. 
Now, the subarray up to the fifth index is sorted.


Recursion 6-(insertion_sort(arr, 5, n))-(selected index i = 5):The selected element at index i=5 is 9. Now, 
we will try to move leftwards and put 9 in its correct position. Here, the correct position for 9 will be index 0. 
So, we need to swap adjacent elements until 9 reaches index 0. Now, the whole array is sorted.


Recursion 7-(insertion_sort(arr, 6, n))-(selected index i = 6):
In this call, the whole array is sorted and the function will hit the base case(i == 6) and it will return from this call.

Note: Inside the recursion, the inner loop j will go back up to 1 not up to 0. Because, if the j becomes 0, 
we will try to access the element arr[j-1] i.e. arr[-1] while swapping. And so, it will give a runtime error.

*/
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n,int i)
{
    // Base Case: i == n.
    if(i == n) return;

    int j = i;
    while(j > 0 && arr[j-1] > arr[j])
    {
        swap(arr[j-1],arr[j]);
        j--;
    }

    insertion_sort(arr,n,++i);
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

    insertion_sort(arr,n,0);

    cout<<"Array after sorting : ";
    for(int i = 0; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}