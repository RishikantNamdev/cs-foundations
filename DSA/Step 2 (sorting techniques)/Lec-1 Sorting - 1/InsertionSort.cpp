/*
3. Insertion Sort Algorithm.
{ always takes an element and place it in its correct order.}
 {
    🧠 Concept:

You divide the array into two parts:
sorted (left side) and unsorted (right side).

You take one element at a time from the unsorted part and insert it into the correct place in the sorted part.

⚙️ Steps:

1.Start from index 1 (since element at 0 is already "sorted").

2.Store the current element as key.

3.Compare it with elements before it.

4.Shift all elements greater than the key one position to the right.

5.Insert the key in its correct position.

📊 Time Complexity:

Best case (already sorted): O(n)

Worst case (reverse sorted): O(n²)

Average: O(n²)

Space: O(1) — done in place.

🧩 Example:

Array: [5, 3, 4, 1, 2]

Start with 3 → compare with 5 → swap → [3, 5, 4, 1, 2]

Next 4 → place it between 3 and 5 → [3, 4, 5, 1, 2]

Next 1 → move it to the start → [1, 3, 4, 5, 2]

Finally 2 → insert after 1 → [1, 2, 3, 4, 5]
}

Problem Statement: Given an array of N integers, write a program to implement the Insertion sorting algorithm.

Examples:

Example 1:
Input: N = 6, array[] = {13,46,24,52,20,9}
Output: 9,13,20,24,46,52
Explanation: 
After sorting the array is: 9,13,20,24,46,52


Example 2:
Input: N=5, array[] = {5,4,3,2,1}
Output: 1,2,3,4,5
Explanation: After sorting the array is: 1,2,3,4,5

*/
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n)
{
    for(int i = 0; i<n ; i++)
    {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
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

    insertion_sort(arr,n);

    cout<<"Array after sorting : ";
    for(int i = 0; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}