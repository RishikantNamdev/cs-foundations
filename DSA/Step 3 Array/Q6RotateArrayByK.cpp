/*
Q6.Rotate array by K elements.

Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

Examples:

Example 1:
Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
Output: 6 7 1 2 3 4 5
Explanation: array is rotated to right by 2 position .

Example 2:
Input: N = 6, array[] = {3,7,8,9,10,11} , k=3 , left 
Output: 9 10 11 3 7 8
Explanation: Array is rotated to right by 3 position.
*/

#include <bits/stdc++.h>
using namespace std;

//Reverse function
void Reverse(vector<int> &arr, int start, int end)
{
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

//my approach Left rotation.
// void left_rotate(vector <int> &arr,int k)
// {
//     vector <int> A = arr;
//     int n = arr.size();
//     for(int i = 0; i < n; i++)
//     {
//         arr[i] = A[(i+k)%n];
//     }
// }

//reverse approach for right rotation.
void left_rotate(vector <int> &arr,int k)
{
    int n = arr.size();
    k %= n;
    Reverse(arr,0,k-1);
    Reverse(arr,k,n-1);
    Reverse(arr,0,n-1);

}


//my approach right rotation.
// void right_rotate(vector <int> &arr,int k)
// {
//     vector <int> A = arr;
//     int n = arr.size();
//     for(int i = 0; i < n; i++)
//     {
//         arr[(i+k)%n] = A[i];
//     }
// }

//reverse approach for right rotation.
void right_rotate(vector<int> &arr, int k)
{
    int n = arr.size();
    k %= n;
    Reverse(arr,0,n-k-1);

    Reverse(arr,n-k,n-1);

    Reverse(arr,0,n-1);
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

    int k;
    cout<<"Enter the rotation value : ";
    cin>>k;

    cout<<"Press 0 for left rotation and 1 for the right rotation : ";
    bool R;
    cin>>R;
    if(R == false)
    {
        left_rotate(arr,k);
        cout<<"Array after left rotation by One : ";
        for(auto it : arr)
        {
            cout<<it<<" ";
        }
    }
    else
    {
        right_rotate(arr,k);
        cout<<"Array after right rotation by One : ";
        for(auto it : arr)
        {
            cout<<it<<" ";
        }
    }
    return 0;
}