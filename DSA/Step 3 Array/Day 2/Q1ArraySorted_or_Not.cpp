#include <iostream>
#include <vector>
using namespace std;

bool is_sorted(const vector<int>& arr)
{
    int n = arr.size();
    if (n < 2) return true;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
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
    
    if(is_sorted(arr))
    {
        cout<<"Array is sorted";
    }
    else
    {
        cout<<"Array is not sorted";
    }

    return 0;
}