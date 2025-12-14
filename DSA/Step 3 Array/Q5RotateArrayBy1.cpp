#include <bits/stdc++.h>
using namespace std;

//My approach.
void rotate(vector <int> &arr)
{
    vector <int> A = arr;
    int n = arr.size();
    for(int i = 0; i < n; i++)
    {
        arr[i] = A[(i+2)%n];
    }
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

    rotate(arr);

    cout<<"Array after left rotation by One : ";
    for(auto it : arr)
    {
        cout<<it<<" ";
    }

    return 0;
}