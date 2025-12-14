#include <bits/stdc++.h>
using namespace std;

//bubble sort using recurtion.
void recursive_bubble_sort(int arr[],int n)
{
    // Base Case: range == 1.
    if(n == 1) return;
    bool isswap = false;
    for(int i = 0; i <= n-2; i++)
    {
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            isswap = true;
        }
        cout<<"run"<<endl;   

    }

    if(!isswap) return;

    //Range reduced after recursion:
    recursive_bubble_sort(arr,n-1);
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

    recursive_bubble_sort(arr,n);

    cout<<"Array after sorting : ";
    for(int i = 0; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}