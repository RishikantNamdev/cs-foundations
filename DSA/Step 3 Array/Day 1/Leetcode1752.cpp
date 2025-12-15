#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

//or more optimize version
bool check(vector<int>& nums) {
        int n = nums.size();
        if (n<=2) return true;
        int decreases = 0;
        for(int i=0; i<n; i++) {
            if (nums[i] > nums[(i+1) % n])
                decreases++;
                if(decreases>1) return false;
        }
        return true;
    }

bool is_sorted(vector <int> &arr,int n)
{
    vector <int> A = arr;
    sort(A.begin(),A.end());
    vector <int> B(n);

    int x = 0;
    while(x < n)
    {
        for(int i = 0; i < n; i++)
        {
            B[i] = A[(i+x)%n];
        }
        if(B == arr)
            return true;
        x++;
    }
    return false;
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

    cout<<is_sorted(arr,n);

    return 0;
}